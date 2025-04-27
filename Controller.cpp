#include "Controller.h"
#include <iostream>

// Hauptschleife: Steuert alle Useraktionen
void Controller::run(const std::string& filename) {
    FileManager fileManager;
    if (!fileManager.loadFile(filename)) {
        std::cout << "Fehler beim Laden der Datei." << std::endl;
        return;
    }
    std::vector<unsigned char>& data = fileManager.getData();
    DisplayManager display;
    Editor editor;
    size_t offset = 0;
    std::string command;
    while (true) {
        display.printPage(data, offset);
        std::cout << "\nBefehle: n (weiter), p (zurück), e (edit), s (speichern), q (beenden)\n> ";
        std::cin >> command;
        if (command == "n") {
            offset += 128;
        } else if (command == "p") {
            offset = (offset >= 128) ? offset - 128 : 0;
        } else if (command == "e") {
            size_t pos;
            std::string val, mode;
            std::cout << "Position: "; std::cin >> pos;
            std::cout << "Wert: "; std::cin >> val;
            std::cout << "Modus (hex/bin/char): "; std::cin >> mode;
            if (!editor.editByte(data, pos, val, mode)) {
                std::cout << "Ungültige Eingabe!" << std::endl;
            }
        } else if (command == "s") {
            if (fileManager.saveFile(filename))
                std::cout << "Datei gespeichert." << std::endl;
            else
                std::cout << "Fehler beim Speichern." << std::endl;
        } else if (command == "q") {
            break;
        }
    }
}
