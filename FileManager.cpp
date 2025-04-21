#include "FileManager.h"
#include <fstream>
#include <iostream>
bool FileManager::loadFile(const std::string& filename) {
    std::ifstream file(filename, std::ios::binary);
    if (!file) return false;
    data = std::vector<unsigned char>((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    return true;
}
bool FileManager::saveFile(const std::string& filename) {
    std::ofstream file(filename, std::ios::binary);
    if (!file) return false;
    file.write(reinterpret_cast<char*>(data.data()), data.size());
    return true;
}
std::vector<unsigned char>& FileManager::getData() {
    return data;
}