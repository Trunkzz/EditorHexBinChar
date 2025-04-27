#include "FileManager.h"
#include <fstream>
#include <iostream>

//Lädt eine Datei binär und speichert sie als Datenvektor
bool FileManager::loadFile(const std::string& filename) {
    std::ifstream file(filename, std::ios::binary);
    if (!file) return false;
    data = std::vector<unsigned char>((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    return true;
}

// Speichert dienaktuelle Datei zurück auf die Festplatte
bool FileManager::saveFile(const std::string& filename) {
    std::ofstream file(filename, std::ios::binary);
    if (!file) return false;
    file.write(reinterpret_cast<char*>(data.data()), data.size());
    return true;
}

// Gibt den internen Byte-Vektor zurück
std::vector<unsigned char>& FileManager::getData() {
    return data;
}
