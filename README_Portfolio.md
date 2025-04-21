# EditorHexBinChar

Ein konsolenbasierter Datei-Editor in C++, der Dateien im **HEX-, BIN- und CHAR-Format** anzeigen und bearbeiten kann.  
Dieses Projekt wurde im Rahmen der IU Portfolioaufgabe (Phase 2) erstellt.

---

## Funktionen

- Anzeige beliebiger Dateien (z. B. `.txt`, `.jpg`, `.bin`, `.exe`) in drei Formaten:
  - **HEX**: Hexadezimale Darstellung
  - **BIN**: Binäre Darstellung (8 Bit)
  - **CHAR**: ASCII-Zeichen (wenn druckbar)
- **Navigation:**
  - `n` → Nächste Seite (128 Bytes weiter)
  - `p` → Vorherige Seite (128 Bytes zurück)
- **Bearbeitung:**
  - `e` → Bearbeite ein Byte (`hex`, `bin` oder `char`)
  - `s` → Speichere Änderungen zurück in die Datei
- **`q`** → Programm beenden

---

## Kompilierung (Windows, g++ empfohlen)

```bash
g++ main.cpp FileManager.cpp DisplayManager.cpp Editor.cpp Controller.cpp -o hex_editor.exe
```

Oder via `build.bat`:

```bash
build.bat
```

---

## Ausführen

```bash
hex_editor.exe beispiel.txt
```

> Hinweis: Es können beliebige Dateien geöffnet werden – Änderungen erfolgen direkt auf Byte-Ebene.

---

## Beispiel für Bearbeitung

```
> e
Position: 5
Wert: 41
Modus: hex
```

→ Setzt Byte an Position 5 auf `0x41` (entspricht dem Buchstaben `A`)

---

## Projektstruktur

```
├── main.cpp             # Einstiegspunkt
├── Controller.*         # Benutzerinteraktion & Steuerung
├── FileManager.*        # Laden & Speichern von Dateien
├── DisplayManager.*     # HEX/BIN/CHAR Anzeige
├── Editor.*             # Byteweise Bearbeitung
└── build.bat            # Optionales Build-Skript
```

---

## 📚Infos zum Projekt

**Modul:** Portfolio Phase 2 – Softwareentwicklung  
**Sprache:** C++  
**Autor:** *Robin Welter*  
**GitHub-Link:** [https://github.com/Trunkzz/EditorHexBinChar](https://github.com/Trunkzz/EditorHexBinChar)
