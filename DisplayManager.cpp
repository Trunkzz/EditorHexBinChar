#include "DisplayManager.h"
#include <iostream>
#include <bitset>
#include <iomanip>
#include <cctype>
void DisplayManager::printPage(const std::vector<unsigned char>& data, size_t offset, size_t width, size_t height) {
    size_t index = offset;
    for (size_t row = 0; row < height && index < data.size(); ++row) {
        for (size_t col = 0; col < width && index < data.size(); ++col, ++index) {
            std::cout << std::hex << std::setw(2) << std::setfill('0') << (int)data[index] << " ";
        }
        std::cout << " | ";
        index -= width;
        for (size_t col = 0; col < width && index < data.size(); ++col, ++index) {
            std::cout << std::bitset<8>(data[index]) << " ";
        }
        std::cout << " | ";
        index -= width;
        for (size_t col = 0; col < width && index < data.size(); ++col, ++index) {
            unsigned char c = data[index];
            std::cout << (std::isprint(c) ? c : '.') << " ";
        }
        std::cout << std::endl;
    }
}