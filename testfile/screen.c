#include <windows.h>
#include "screen.h"
#include <string.h>


void clearBuffer(char* screenBuf, int width, int height)
{
    int i = 0;     /* 가로 index */
    int j = 0;     /* 세로 index */
    while (j < height)
    {
        while (i < width + 1) /* 개행 문자 때문에 + 1*/
        {
            if (i == width)
                screenBuf[i + (j * (width + 1))] = '\n';
            else
            {
                if (i == 0 || i == 1 || i == (width - 1) || i == (width - 2) || j == 0 || j == (height - 1))
                    screenBuf[i + (j * (width + 1))] = '-';
                else
                    screenBuf[i + (j * (width + 1))] = ' ';
            }
            i = i + 1;
        }
        i = 0;
        j = j + 1;
    }
    screenBuf[height * (width + 1) - 1] = '\0';
}

void writeStringToBuffer(char* screenBuf, const char* string, int x, int y, int bufferWidth, int bufferHeight)
{
    int stringLength = strlen(string);
    int i, j;
    int index = x + (y * bufferWidth);
    for (i = 0; i < stringLength; i++)
    {
        if (index >= bufferWidth * bufferHeight)
            break;
        if (string[i] == '\n')
        {
            index = x + ((++y) * bufferWidth);
            continue;
        }
        screenBuf[index++] = string[i];
    }
}

    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    //     < oshi no ko >                                     | - | X |     
    // ________________________________________________________________
    // ----------------------------------------------------------------

    // -----------------
    // | 2.how to play? |
    // |                |
    // -----------------

    void setgamenameToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* gamename = "   oshi no ko                                          | - | X |\n";     
    int gamenameLength = strlen(gamename);
    int x = (width - gamenameLength) /2 ;
    int y = height / 2 - 11;

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, gamename, offset, 0, width, height);
}

    void setlineToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* line = "----------------------------------------------------------------\n";     
    int lineLength = strlen(line);
    int x = (width - lineLength) /2 ;
    int y = height / 2 - 10;

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, line, offset, 0, width, height);
}


void setTitleToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* title = "     ____   _____ _    _ _____    \n";     
    int titleLength = strlen(title);
    int x = (width - titleLength) /2 ;
    int y = height / 2 - 8;

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, title, offset, 0, width, height);
}

void setTitle1ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* title1 = "  *           / __ \\ / ____| |  | |_   _|          *   \n";  
    int title1Length = strlen(title1);
    int x = (width - title1Length) /2 ;
    int y = height / 2 - 7;

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, title1, offset, 0, width, height);
}

void setTitle2ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* title2 =  "     *   | |  | | (___ | |__| | | |     *      \n";
    int title2Length = strlen(title2);
    int x = (width - title2Length) /2 ;
    int y = height / 2 - 6;

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, title2, offset, 0, width, height);
}

void setTitle3ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* title3 =  "      | |  | |\\___ \\|  __  | | |         \n";
    int title3Length = strlen(title3);
    int x = (width - title3Length) /2 ;
    int y = height / 2 - 5;

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, title3, offset, 0, width, height);
}

void setTitle4ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* title4 =  "*        | |__| |____) | |  | |_| |_         *\n";
    int title4Length = strlen(title4);
    int x = (width - title4Length) /2 ;
    int y = height / 2 - 4;

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, title4, offset, 0, width, height);
}

void setTitle5ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* title5 = "    \\____/|_____/|_|  |_|_____|   \n";
    int title5Length = strlen(title5);
    int x = (width - title5Length) /2 ;
    int y = height / 2 - 3;

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, title5, offset, 0, width, height);
}






void setTitle6ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* title6 = "_|      _|    _|_|        _|    _|    _|_|    \n";
    int title6Length = strlen(title6);
    int x = (width - title6Length) /2 ;
    int y = height / 2 - 1;

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, title6, offset, 0, width, height);
}

void setTitle7ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* title7 = "_|_|    _|  _|    _|      _|  _|    _|    _|  \n";
    int title7Length = strlen(title7);
    int x = (width - title7Length) /2;
    int y = height / 2 ;

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, title7, offset, 0, width, height);
}

void setTitle8ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* title8 = "_|  _|  _|  _|    _|      _|_|      _|    _|  \n";
    int title8Length = strlen(title8);
    int x = (width - title8Length) /2;
    int y = height / 2 +1;

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, title8, offset, 0, width, height);
}

void setTitle9ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* title9 = "_|    _|_|  _|    _|      _|  _|    _|    _|  \n";
    int title9Length = strlen(title9);
    int x = (width - title9Length) /2;
    int y = height / 2 +2;

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, title9, offset, 0, width, height);
}

void setTitle10ToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* title10 = "_|      _|    _|_|        _|    _|    _|_|    \n";
    int title10Length = strlen(title10);
    int x = (width - title10Length) /2;
    int y = height / 2 +3;

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, title10, offset, 0, width, height);
}


// |    1.start     |
// | 2.how to play? |
// |    3.exit      | 
// ------------------
// __________________
// O o O o O o O o O o
// o  o  o  o  o  o  o
// ==================
// * * * * * * * * * *


void setstartToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* start = "1. start"; // 텍스트를 분홍색으로 출력합니다.
    // "\x1b[35m1.start\x1b[0m";
    int startLength = strlen(start);
    int x = (width - startLength) / 2;
    int y = height / 2 + 7;

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, start, offset, 0, width, height);
}




void sethowplayToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* howplay = "2. how to play?";
    int howplayLength = strlen(howplay);
    int x = (width - howplayLength) / 2 ;
    int y = height /2 + 8 ;

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, howplay, offset, 0, width, height);
}

void setexitToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* exit = "3. exit";
    int exitLength = strlen(exit);
    int x = (width - exitLength) / 2;
    int y = height / 2 + 9 ;

    int offset = (width + 1) * y + x;
    writeStringToBuffer(screenBuf, exit, offset, 0, width, height);
    
}


