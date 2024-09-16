
// Downscales .cbz files
// TODO:
// -unzip

#include <cstdio>
#include <iostream>
#include "minizip\unzip.h"
#include "minizip\zip.h"

int main(int argc, char *argv[]) {
    // take command line arguments
    std::string filePath = argv[1];
    std::string fileName = filePath;
    fileName.erase(fileName.length() - 4, 4);
    std::string desiredWidthString = argv[2];
    std::string desiredHeightString = argv[3];

    // convert
    int desiredWidth, desiredHeight;
    desiredWidth = std::stoi(desiredWidthString);
    desiredHeight = std::stoi(desiredHeightString);

    // rename .cbz to .zip
    std::rename(filePath.c_str(), fileName.append(".zip").c_str());
    
    // extract file


    // testing
    std::cout << filePath << "\n" << desiredWidth<< "\n" << desiredHeight;
    return 0;
}