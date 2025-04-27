#pragma once
#include <vector>
#include <string>

// Klasse für die Bearbeitung der einzelnen Bytes
class Editor {
public:
    bool editByte(std::vector<unsigned char>& data, size_t position, const std::string& newValue, const std::string& mode);
};
