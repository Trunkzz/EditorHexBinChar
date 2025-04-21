#pragma once
#include <vector>
#include <string>
class FileManager {
public:
    bool loadFile(const std::string& filename);
    bool saveFile(const std::string& filename);
    std::vector<unsigned char>& getData();
private:
    std::vector<unsigned char> data;
};