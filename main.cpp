#include "Controller.h"
int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Bitte eine Datei angeben!" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    Controller editor;
    editor.run(filename);
    return 0;
}