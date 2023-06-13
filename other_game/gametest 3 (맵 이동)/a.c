#include "oshinoko.h"
#define MAP_WIDTH 70
#define MAP_HEIGHT 24

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void drawMap() {
    int x, y;
    
    // 상자 그리기
    for (x = 0; x < MAP_WIDTH; x++) {
        gotoxy(x, 0);
        printf("■");
        gotoxy(x, MAP_HEIGHT - 1);
        printf("■");
    }
    for (y = 1; y < MAP_HEIGHT - 1; y++) {
        gotoxy(0, y);
        printf("■");
        gotoxy(MAP_WIDTH - 1, y);
        printf("■");
    }
}

void hideCursor() {
    CONSOLE_CURSOR_INFO cursor_info;
    cursor_info.dwSize = 1;
    cursor_info.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

void gamego()
{

    drawMap();
    int x = MAP_WIDTH / 2, y = MAP_HEIGHT / 2;
    while (1) {
        gotoxy(x, y);
        printf("웃");

        if (GetAsyncKeyState('W') & 0x8000 && y > 1)
            y--;
        else if (GetAsyncKeyState('S') & 0x8000 && y < MAP_HEIGHT - 2)
            y++;
        else if (GetAsyncKeyState('A') & 0x8000 && x > 1)
            x--;
        else if (GetAsyncKeyState('D') & 0x8000 && x < MAP_WIDTH - 2)
            x++;
        else if (GetAsyncKeyState('Q') & 0x8000)
            break;

        Sleep(100);
        system("cls");
    }


}
