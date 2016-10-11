/* 
 * File:   Main.h
 * Author: Guilherme Monteiro
 *
 */

#ifndef MAIN_H
#define	MAIN_H

//#include <cv.h>
//#include <highgui.h>
//#include <cxcore.h>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <cerrno>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>

#include "ImageNoisesExtractor.h"

using namespace std;
using namespace cv;

/**
 * Main Class
 * 
 * @author Guilherme Monteiro
 * 
 */
class Main { 
public:
    Main();
    Main(const Main& orig);
    virtual ~Main();
    int main(int argc, char** argv);
private:
    void saveLimiarizedImage(IplImage* img, string path);
};

#endif	/* MAIN_H */

