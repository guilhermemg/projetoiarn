/* 
 * File:   TesseractExecutor.cpp
 * Author: guilhermemg
 * 
 * Created on 11 de Outubro de 2016, 22:09
 */

#include "headers/TesseractExecutor.h"

TesseractExecutor::TesseractExecutor() {
}

TesseractExecutor::TesseractExecutor(const TesseractExecutor& orig) {
}

TesseractExecutor::~TesseractExecutor() {
}

void TesseractExecutor::run(string limImgPath) {
    
    char *outText;

    tesseract::TessBaseAPI *api = new tesseract::TessBaseAPI();
    // Initialize tesseract-ocr with English, without specifying tessdata path
    if (api->Init(NULL, "eng")) {
        fprintf(stderr, "Could not initialize tesseract.\n");
        exit(1);
    }

    // Open input image with leptonica library    
    Pix *image = pixRead("tiff/tmpTiffImg.tiff");
    api->SetImage(image);
    // Get OCR result
    outText = api->GetUTF8Text();
    printf("OCR output:\n%s", outText);

    // Destroy used object and release memory
    api->End();
    delete [] outText;
    pixDestroy(&image);
}

