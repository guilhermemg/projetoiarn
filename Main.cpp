/* 
 * File:   Main.cpp
 * Author: Guilherme Gadelha
 *
 * Created on 15 de Setembro de 2016, 21:08
 */

#include "headers/Main.h"


/*
 * 1. LE IMAGENS
 * 2. PREPROCESSA IMAGENS
 * 3. PASSA IMAGENS PARA TESSERACT
 * 
 */
int main(int argc, char** argv) {
    
    vector<string> imgsPaths = vector<string>();
    for(int i = 1; i < 76; i++) {
        std::ostringstream s;
        s << i;
        if(i < 10) {
            imgsPaths.push_back("images/Treinamento #0" + s.str() + ".png");
        }
        else {
            imgsPaths.push_back("images/Treinamento #" + s.str() + ".png");
        }
    }
    
    vector<string> limImgsPaths = vector<string>();
    for(int i = 1; i < 76; i++) {
        std::ostringstream s;
        s << i;
        limImgsPaths.push_back("limImgs/img" + s.str() + ".png");
    }
    
    //TesseractExecutor* tessExec = new TesseractExecutor();
    
    for(int i = 0; i < imgsPaths.size(); i++) {
        IplImage* image = cvLoadImage(imgsPaths.at(i).c_str(), CV_LOAD_IMAGE_COLOR);

        if(!image) {
            printf("Could not open or find the image: ");
            printf(imgsPaths.at(i).c_str());
            return -1;
        }

        ImageNoisesExtractor* imgNoiseExtractor = new ImageNoisesExtractor(image);
        IplImage* imageLimiarizedInGrayScale = imgNoiseExtractor->extractNoises();
        
        cvSaveImage(limImgsPaths.at(i).c_str(), imageLimiarizedInGrayScale);
        
        //cvNamedWindow( "Original Image", WINDOW_AUTOSIZE );
        //cvShowImage( "Original window", image );
        //cvNamedWindow( "Display window", WINDOW_AUTOSIZE );
        //cvShowImage( "Display window", imageLimiarizedInGrayScale ); 
        //cvWaitKey(0);
        
        cvReleaseImage(&image);
        cvReleaseImage(&imageLimiarizedInGrayScale);
        
        ImageFormatConverter* converter = new ImageFormatConverter(limImgsPaths.at(i), i+1);
        converter->convertToTiffFormat();
        
        //tessExec->run(limImgsPaths.at(i).c_str());
    }
    
    return 0;
}

