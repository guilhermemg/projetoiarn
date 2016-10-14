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

#include <string>
#include <vector>

#include <sstream>

#include "ImageNoisesExtractor.h"
#include "TesseractExecutor.h"

#define NUM_IMGS 1

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
};

#endif	/* MAIN_H */

