#pragma once
#include <vector>
#include <string>
class FileManager {

// Klasse für Dateioperationen: Laden und Speichern
public:
    bool loadFile(const std::string& filename);
    bool saveFile(const std::string& filename);
    std::vector<unsigned char>& getData();
private:
    std::vector<unsigned char> data;
};
