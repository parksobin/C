#ifndef OSHINOKO_H
#define OSHINOKO_H
#include <stdio.h>
#include <Windows.h>
#include <conio.h>



//    cursor.c
void SetCurrentCursorPos(int x, int y);
void RemoveCursor(void);
COORD GetCurrentCursorPos(void);


//    gamemenu.c
void clearBuffer(char* screenBuf, int width, int height);
void delay_print(char *str);
void titledraw();
void howplay();
void gameexit();
void realstart();


void handleInput();
void drawMap();


#endif

