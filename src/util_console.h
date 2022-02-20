#pragma once

#include <windows.h>
#include <memory>
#include <string>

class util_console
{
public:
    struct ConsoleTextBlock {
    private:
        short H;
        short V;
        short hLength;
        short vLength;
        std::unique_ptr<std::string> blankingStr;
    public:
        ConsoleTextBlock() : H(0), V(0), hLength(1), vLength(1), blankingStr(std::make_unique<std::string>("")) {}
        void blank();
        void cursorHome();
        void fillBlankingStr(short numBlanks);
        short getH() { return H; }
        short getHlen() { return hLength; }
        short getLineAfter() { return V + vLength; }
        short getV() { return V; }
        short getVlen() { return vLength; }
        void setH(short newH) { H = newH; }
        void setHlen(short newHlen) { hLength = newHlen; }
        void setV(short newV) { V = newV; }
        void setVlen(short newVlen) { vLength = newVlen; }
    };


private:
    COORD storedCursorPos;

public:
    //http://www.cplusplus.com/articles/4z18T05o/
    static void cursorToZeroZero() { cursorTo(0, 0); }// print_f("\033[0;0H");
    static void cursorTo(const short newV, const short newH);
    static void cursorTo(COORD newCoord);
    static void clear_screen(char fill = ' ');
    static COORD GetConsoleCursorPosition();
    static unsigned int const GetConsoleCursorPositionH() { return GetConsoleCursorPosition().X; }
    static unsigned int const GetConsoleCursorPositionV() { return GetConsoleCursorPosition().Y; }
    void print_At(const short atV, const short atH, std::string s);
    void print_NChars(const unsigned int& num, const char& c);
    void randomSeed();
    void restoreStoredCursorPos() { cursorTo(storedCursorPos); }
    void storeCursorPos() { storedCursorPos = GetConsoleCursorPosition(); }
};
