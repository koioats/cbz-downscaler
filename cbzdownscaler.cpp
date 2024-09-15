
// Downscales .cbz files
// TODO:
// -rename file to zip
// -unzip

#include <iostream>
#include <fstream>
#include <cstdio>

int main(int argc, char *argv[]) {
    // take command line arguments
    std::string filePath = argv[1];
    std::string desiredWidthString = argv[2];
    std::string desiredHeightString = argv[3];
    
    // convert 
    int desiredWidth, desiredHeight;
    desiredWidth = std::stoi(desiredWidthString);
    desiredHeight = std::stoi(desiredHeightString);
    
    // testing
    std::cout << filePath << "\n" << desiredWidth<< "\n" << desiredHeight;
    return 0;
}