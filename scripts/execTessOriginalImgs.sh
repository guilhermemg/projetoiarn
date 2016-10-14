#!/bin/bash

# execute tesseract with original images
for i in `seq 1 75`
do
   if [ $i -lt 10 ]; then
      convert "../limImgs/img$i.png" "../tiffMachine/tiffImg0$i.tiff"
      tesseract "../tiffMachine/tiffImg0$i.tiff" "../transcMachine2/img0$i.txt" --tessdata-dir /usr/share/tesseract-ocr/ -l eng
   fi
   if [ $i -ge 10 ]; then
        convert "../limImgs/img$i.png" "../tiffMachine/tiffImg$i.tiff"
        tesseract "../tiffMachine/tiffImg$i.tiff" "../transcMachine2/img$i.txt" --tessdata-dir /usr/share/tesseract-ocr/ -l eng
   fi
done

