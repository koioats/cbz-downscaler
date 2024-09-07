
// Downscales .cbz files
// TODO:
// -rename file to zip
// -unzip

#include <iostream>
#include <fstream>
#include <cstdio>
#include <filesystem>

int main(int argc, char *argv[]) {
    //std::string fileStr = argv[1];
    std::filesystem::path filePath = argv[1];
    //std::ofstream cbz(filePath);
    //std::cout << "File: " + filePath + "\n";
    filePath.replace_extension(".zip");
    //system("pause");

    // i have no idea what i'm doing ToT
/*     std::string fileNameShort = fileName;
    fileNameShort.erase(fileNameShort.length() - 4, 4);
    fileNameShort = fileNameShort + ".zip";
    std::cout << "File opened\n";
    std::rename(fileName.c_str(), fileNameShort.c_str());
    cbz.close();
    std::cout << "File closed\n";
    system("pause"); */
    return 0;
}