/* 
 * File:   ImageConverter.h
 * Author: Guilherme Monteiro
 *
 */

#ifndef IMAGEFORMATCONVERTER_H
#define	IMAGEFORMATCONVERTER_H

#include <string>
#include <sstream>

#include <ImageMagick-7/Magick++.h>

using namespace std;
using namespace Magick;

class ImageFormatConverter {
public:
    ImageFormatConverter(string limImgPath, int num);
    ImageFormatConverter(const ImageFormatConverter& orig);
    virtual ~ImageFormatConverter();
    void convertToTiffFormat();
private:
    string limImgPath;
    int numImg;
};

#endif	/* IMAGEFORMATCONVERTER_H */

