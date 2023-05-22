#include <windows.h>
#include "screen.h"
#include <string.h>
//|                                              |
//|            1.  Yes       2.   No             |
//|        Are you sure you want to exit?        |
//|    Previous information may not be saved.    |
//------------------------------------------------

void setexit1ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* exit1 = "|        Are you sure you want to exit?        |";
    int exit1Length = strlen(exit1);
    int x = (width - exit1Length) / 2;
    int y = height / 2 - 5;  

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, exit1, offset, 0, width, height);
}

void setexit2ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* exit2 = "|    Previous information may not be saved.    |";
    int exit2Length = strlen(exit2);
    int x = (width - exit2Length) / 2;
    int y = height / 2 - 4;  

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, exit2, offset, 0, width, height);
}

void setexit6ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* exit6 = "|            1.  Yes       2.   No             |";
    int exit6Length = strlen(exit6);
    int x = (width - exit6Length) / 2;
    int y = height / 2 - 2;  

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, exit6, offset, 0, width, height);
}

void setexit3ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* exit3 = "------------------------------------------------\n
    ------------------------------------------------";
    int exit3Length = strlen(exit3);
    int x = (width - exit3Length) / 2;
    int y = height / 2 - 1;  

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, exit3, offset, 0, width, height);
}

void setexit4ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* exit4 = "------------------------------------------------";
    int exit4Length = strlen(exit4);
    int x = (width - exit4Length) / 2;
    int y = height / 2 - 7;  

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, exit4, offset, 0, width, height);
}

void setexit7ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* exit7 = "|                                              |";
    int exit7Length = strlen(exit7);
    int x = (width - exit7Length) / 2;
    int y = height / 2 - 3;  

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, exit7, offset, 0, width, height);
}

void setexit8ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* exit8 = "|                                              |";
    int exit8Length = strlen(exit8);
    int x = (width - exit8Length) / 2;
    int y = height / 2 - 6;  

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, exit8, offset, 0, width, height);
}