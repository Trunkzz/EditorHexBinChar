@echo off
echo [*] Kompiliere hex_editor...
g++ main.cpp FileManager.cpp DisplayManager.cpp Editor.cpp Controller.cpp -o hex_editor.exe
if %errorlevel% neq 0 (
    echo [!] Fehler beim Kompilieren.
) else (
    echo [✓] Kompiliert als hex_editor.exe
)
pause