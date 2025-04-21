#include "Editor.h"
#include <sstream>
#include <bitset>
bool Editor::editByte(std::vector<unsigned char>& data, size_t position, const std::string& newValue, const std::string& mode) {
    if (position >= data.size()) return false;
    if (mode == "hex") {
        unsigned int val;
        std::stringstream ss;
        ss << std::hex << newValue;
        ss >> val;
        data[position] = static_cast<unsigned char>(val);
    } else if (mode == "bin") {
        data[position] = static_cast<unsigned char>(std::bitset<8>(newValue).to_ulong());
    } else if (mode == "char") {
        data[position] = newValue[0];
    } else {
        return false;
    }
    return true;
}