/* 
 * File:   ImageHistogramCreatorCV.h
 * Author: Guilherme Monteiro
 *
 */

#ifndef IMAGEONECHANNELHISTOGRAMCREATOR_H
#define	IMAGEONECHANNELHISTOGRAMCREATOR_H

#include <cstdlib>
#include <highgui.h>
#include <cxcore.h>
#include "cv.h"

using namespace std;

/**
 * Class that represents a creator of
 * histogram of a gray-scale image.
 * 
 * @author Guilherme Monteiro
 * 
 */
class ImageOneChannelHistogramCreator {
public:
    ImageOneChannelHistogramCreator(IplImage* img);
    ImageOneChannelHistogramCreator(const ImageOneChannelHistogramCreator& orig);
    virtual ~ImageOneChannelHistogramCreator();
    vector<int> getColorsHistogram();
    IplImage* getImage();
private:
    IplImage* originalImg;
    void showHist(IplImage* hist_img);
};

#endif	/* IMAGEONECHANNELHISTOGRAMCREATOR_H */

