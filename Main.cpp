/* 
 * File:   Main.cpp
 * Author: Guilherme Gadelha
 *
 * Created on 15 de Setembro de 2016, 21:08
 */

#include "headers/Main.h"


void Main::saveLimiarizedImage(IplImage* img, string path) {
    //TODO
}


/*
 * 1. LE IMAGENS
 * 2. PREPROCESSA IMAGENS
 * 3. PASSA IMAGENS PARA TESSERACT
 * 
 */
int main(int argc, char** argv) {
    
    vector<string> imagesPaths;
    
    string path1 = "/page/img1.png";
    string path2 = "/page/img2.png";
    string path3 = "/page/img3.png";
    
    imagesPaths.push_back(path1);
    imagesPaths.push_back(path2);
    imagesPaths.push_back(path3);
    
    //for(int i = 0; i < imagesPaths.size(); i++) {
    IplImage* image = cvLoadImage("images/img1.png", CV_LOAD_IMAGE_COLOR);

    if(!image)                              // Check for invalid input
    {
        cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }
    
    ImageNoisesExtractor* imgNoiseExtractor = new ImageNoisesExtractor(image);
    IplImage* imageLimiarizedInGrayScale = imgNoiseExtractor->extractNoises();

    cvNamedWindow( "Original Image", WINDOW_AUTOSIZE );
    cvShowImage( "Original window", image );
    
    cvNamedWindow( "Display window", WINDOW_AUTOSIZE );// Create a window for display.
    cvShowImage( "Display window", imageLimiarizedInGrayScale ); 

    cvWaitKey(0);
    
    cvReleaseImage(&image);
    cvReleaseImage(&imageLimiarizedInGrayScale);
    
        //saveLimiarizedImage(imageLimiarizedInGrayScale, imagesPaths[i] + "_limiarized.png");
    //}
    
    return 0;
}

