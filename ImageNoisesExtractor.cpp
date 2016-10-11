/* 
 * File:   ImageNoisesExtractor.cpp
 * Author: Guilherme Monteiro
 */

#include "headers/ImageNoisesExtractor.h"

ImageNoisesExtractor::ImageNoisesExtractor(IplImage* img) {
    this->originalImage = img;
}

ImageNoisesExtractor::ImageNoisesExtractor(const ImageNoisesExtractor& orig) {
}

ImageNoisesExtractor::~ImageNoisesExtractor() {
}

/**
 * Returns the original image.
 * 
 * @return originalImage
 */
IplImage* ImageNoisesExtractor::getImage() {
    return this->originalImage;
}

/**
 * Returns a limiarized image, with
 * the noises reduced by way of thresholding.
 * 
 * @return limiarized image
 */
IplImage* ImageNoisesExtractor::extractNoises() {
    //showImage(getImage(), "Original image");
    
    IplImage* grayImage = cvCreateImage(cvGetSize(getImage()), IPL_DEPTH_8U, 1);
    cvCvtColor(getImage(), grayImage, CV_BGR2GRAY);
    
    ImageOneChannelHistogramCreator creatorOneChannel(grayImage);
    vector<int> histogram = creatorOneChannel.getColorsHistogram();
    int betterThreshold = getBetterThresholdBasedOnHistogram(histogram, grayImage->imageSize);
    
    // make smooth based on gaussian
    IplImage* bluredImage = cvCreateImage(cvGetSize(grayImage), IPL_DEPTH_8U, 1);
    cvSmooth(grayImage, bluredImage, CV_GAUSSIAN, 3, 3);
    //showImage(bluredImage, "Blured image");
    
    // make the limiarization of the image
    IplImage* imageLimiarizedInGrayScale = cvCreateImage(cvGetSize(bluredImage), IPL_DEPTH_8U, 1);;
    cvThreshold(bluredImage, imageLimiarizedInGrayScale, betterThreshold, 255, CV_THRESH_BINARY | CV_THRESH_OTSU);
//    showImage(imageLimiarizedInGrayScale, "image limiarized in gray scale");
    
    cvReleaseImage(&grayImage);
    cvReleaseImage(&bluredImage);
    
    return imageLimiarizedInGrayScale;
}

void ImageNoisesExtractor::showImage(IplImage* img, string titleWindow) {
    cvNamedWindow(titleWindow.c_str(), CV_WINDOW_FREERATIO);
    cvShowImage(titleWindow.c_str(), img);
    cvWaitKey(0);
    cvDestroyWindow(titleWindow.c_str());
}

/**
 * Return the better threshold,
 * its is used in cvThreshold function.
 * 
 * @param histogram
 * @param imageSize
 * @return factor of limiarization
 */
int ImageNoisesExtractor::getBetterThresholdBasedOnHistogram(vector<int> histogram, int imageSize) {
    vector<float> histogramNormalized = normalizeHistogram(histogram, imageSize);
    
    int pikePosition = 0;
    float pike = 0;
    for(int i = 0; i < 256; i++) { // get the max value of histogram
        if(histogramNormalized[i] > pike) {
            pike = histogramNormalized[i];
            pikePosition = i;
        }
    }
    
    int breakParameter = 0.1; // value determined empirically
    
    int indexOfThreshold = 0;
    for(indexOfThreshold = pikePosition; indexOfThreshold < 256; indexOfThreshold++) {
        if(histogramNormalized[indexOfThreshold]/histogramNormalized[pikePosition] <= breakParameter) {
            break;
        }
    }
    
//    printf("index of threshold: %d\n", indexOfThreshold);
    
    return histogramNormalized[indexOfThreshold] * imageSize; // denormalize
}

/**
 * Normalize the histogram, divide each
 * value of it by the image size.
 * 
 * @param histogram
 * @param imageSize
 * @return histogram normalized
 */
vector<float> ImageNoisesExtractor::normalizeHistogram(vector<int> histogram, int imageSize) {
    vector<float> histogramNormalized(256);
    
    for(int i = 0; i < 256; i++) {
        histogramNormalized[i] = (histogram[i]/imageSize);
//        printf("histogram[%d]: %d\n", i, histogram[i]);
//        printf("histogramNormalized[%d]: %.6f\n", i, histogramNormalized[i]);
    }
    
    return histogramNormalized;
}
