#include <windows.h>
#include "screen.h"
#include <string.h>

void sethowtoplayToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* howtoplay = "________________________";
    int howtoplayLength = strlen(howtoplay);
    int x = (width - howtoplayLength) / 2;
    int y = height / 2 - 9;  

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, howtoplay, offset, 0, width, height);
}

void sethowtoplay1ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* howtoplay1 = "H o w  T o  P l a y ?";
    int howtoplay1Length = strlen(howtoplay1);
    int x = (width - howtoplay1Length) / 2;
    int y = height / 2 - 8;  

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, howtoplay1, offset, 0, width, height);
}

void sethowtoplay2ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* howtoplay2 = "________________________";
    int howtoplay2Length = strlen(howtoplay2);
    int x = (width - howtoplay2Length) / 2;
    int y = height / 2 - 7;  

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, howtoplay2, offset, 0, width, height);
}

void sethowtoplay3ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* howtoplay3 = " O";
    int howtoplay3Length = strlen(howtoplay3);
    int x = (width - howtoplay3Length) / 2;
    int y = height / 2 - 6;  

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, howtoplay3, offset, 0, width, height);
}

void sethowtoplay4ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* howtoplay4 = "o";
    int howtoplay4Length = strlen(howtoplay4);
    int x = (width - howtoplay4Length) / 2;
    int y = height / 2 - 5;  

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, howtoplay4, offset, 0, width, height);
}




void setplayhow1ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* playhow1 = "Become the most perfect idol";
    int playhow1Length = strlen(playhow1);
    int x = (width - playhow1Length) / 2;
    int y = height / 2 - 2;  

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, playhow1, offset, 0, width, height);
}

void setplayhow2ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* playhow2 = "in the country by gaining";
    int playhow2Length = strlen(playhow2);
    int x = (width - playhow2Length) / 2;
    int y = height / 2 - 1;  

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, playhow2, offset, 0, width, height);
}

void setplayhow3ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* playhow3 = "popularity! The way to play it";
    int playhow3Length = strlen(playhow3);
    int x = (width - playhow3Length) / 2;
    int y = height / 2 ;  

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, playhow3, offset, 0, width, height);
}

void setplayhow4ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* playhow4 = "is to choose what the public";
    int playhow4Length = strlen(playhow4);
    int x = (width - playhow4Length) / 2;
    int y = height / 2 +1; 

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, playhow4, offset, 0, width, height);
}

void setplayhow5ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* playhow5 = "wants and build awareness!!";
    int playhow5Length = strlen(playhow5);
    int x = (width - playhow5Length) / 2;
    int y = height / 2+2 ; 

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, playhow5, offset, 0, width, height);
}


void setreturn1LengthToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* return1 = "return to the main screen?";
    int return1Length = strlen(return1);
    int x = (width - return1Length) / 2;
    int y = height / 2+7 ; 

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, return1, offset, 0, width, height);
}
void setreturn2LengthToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* return2 = "1.Yes   2.No";
    int return2Length = strlen(return2);
    int x = (width - return2Length) / 2;
    int y = height / 2+8 ; 

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, return2, offset, 0, width, height);
}

