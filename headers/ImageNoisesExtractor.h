/* 
 * File:   ImageBackgroundExtractor.h
 * Author: Guilherme Monteiro
 *
 */

#ifndef IMAGENOISESEXTRACTOR_H
#define	IMAGENOISESEXTRACTOR_H

#include <cv.h>
#include <highgui.h>
#include <cxcore.h>

#include <string>

#include "ImageOneChannelHistogramCreator.h"

using namespace std;

/**
 * Class that represents an images noises
 * extractor, it's remove the major of noises
 * of the image.
 * 
 * @author Guilherme Monteiro
 * 
 */
class ImageNoisesExtractor {
public:
    ImageNoisesExtractor(IplImage* img);
    ImageNoisesExtractor(const ImageNoisesExtractor& orig);
    virtual ~ImageNoisesExtractor();
    IplImage* extractNoises();
private:
    IplImage* originalImage;
    
    IplImage* getImage();
    void showImage(IplImage* img, string titleWindow);
    int getBetterThresholdBasedOnHistogram(vector<int> histogram, int imageSize);
    vector<float> normalizeHistogram(vector<int> histogram, int imageSize);
};

#endif	/* IMAGENOISESEXTRACTOR_H */

