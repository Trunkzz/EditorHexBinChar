#pragma once
#include <vector>

// Klasse für die Darstellung der Datei
class DisplayManager {
public:
    void printPage(const std::vector<unsigned char>& data, size_t offset, size_t width = 16, size_t height = 8);
};
