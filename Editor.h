#pragma once
#include <vector>
#include <string>
class Editor {
public:
    bool editByte(std::vector<unsigned char>& data, size_t position, const std::string& newValue, const std::string& mode);
};