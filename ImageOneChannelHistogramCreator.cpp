/* 
 * File:   ImageOneChannelHistogramCreator.cpp
 * Author: Guilherme Monteiro
 */

#include "headers/ImageOneChannelHistogramCreator.h"

ImageOneChannelHistogramCreator::ImageOneChannelHistogramCreator(IplImage* orig) {
    this->originalImg = orig;
}

ImageOneChannelHistogramCreator::ImageOneChannelHistogramCreator(const ImageOneChannelHistogramCreator& orig) {
}

ImageOneChannelHistogramCreator::~ImageOneChannelHistogramCreator() {
}

IplImage* ImageOneChannelHistogramCreator::getImage() {
    return this->originalImg;
}

/**
 * Create a one channel color
 * histogram to referred image.
 * 
 * @return array of ocurrrency of each color
 */
vector<int> ImageOneChannelHistogramCreator::getColorsHistogram() {
    vector<int> array(256);
    
    for(int i = 0; i < 256; i++) { // zera array
        array[i] = 0;
    }
    
    for(int i = 0; i < getImage()->height; i++) { // travels the image discovering the frequency of each color
        uchar* ptr2 = (uchar*)(getImage()->imageData + i*getImage()->widthStep); // line of pixels
        for(int j = 0; j < getImage()->width; j++) {
            int f = (ptr2[3*j] + ptr2[3*j + 1] + ptr2[3*j+2]) / 3;
            array[f]++;
        }
    }
    
    return array;
}
