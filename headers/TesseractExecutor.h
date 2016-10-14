/* 
 * File:   TesseractExecutor.h
 * Author: guilhermemg
 *
 * Created on 11 de Outubro de 2016, 22:09
 */


#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>

#include <string>

#include "ImageFormatConverter.h"

#ifndef TESSERACTEXECUTOR_H
#define	TESSERACTEXECUTOR_H

using namespace std;

class TesseractExecutor {
public:
    TesseractExecutor();
    TesseractExecutor(const TesseractExecutor& orig);
    virtual ~TesseractExecutor();
    
    void run(string limImgPath);
    
private:

};

#endif	/* TESSERACTEXECUTOR_H */

