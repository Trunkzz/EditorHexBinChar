#pragma once
#include "FileManager.h"
#include "DisplayManager.h"
#include "Editor.h"

// Controller: Steuert den Ablauf der Anwendung
class Controller {
public:
    void run(const std::string& filename);
};
