/* 
 * File:   ImageConverter.cpp
 * Author: Guilherme Monteiro
 * 
 */

#include "headers/ImageFormatConverter.h"

/**
 * Constructor of ImageConverter class.
 * 
 * @param 
 */
ImageFormatConverter::ImageFormatConverter(string limImgPath, int num) {
    this->limImgPath = limImgPath;
    this->numImg = num;
}

ImageFormatConverter::ImageFormatConverter(const ImageFormatConverter& orig) {
}

ImageFormatConverter::~ImageFormatConverter() {
}

void ImageFormatConverter::convertToTiffFormat() {
    std::ostringstream s;
    s << this->numImg;
    
    string imgTiffPath = "tiff/img" + s.str() +".tiff";
    InitializeMagick(imgTiffPath.c_str());

    // Read GIF file from disk 
    Image image( this->limImgPath.c_str());

    // Write to BLOB in JPEG format 
    Blob blob; 
    image.magick( "TIFF" ); // Set TIFF output format 
    image.write( "tiff/tmpTiffImg" + s.str() + ".tiff" );

}

