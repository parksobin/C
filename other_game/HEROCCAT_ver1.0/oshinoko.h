#ifndef OSHINOKO_H
#define OSHINOKO_H
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h> //srand, rand를 사용하기 위한 헤더파일

#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

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



//    gamecode.c
void gamestart();
void chapter1_fight();
void monster_gauge();
void heart_gauge();
void loading_text();
void name_text();
void line();
void normal_botton();
void chapter1();
void weapon();
void monster();
void border_line();
void monster_punch1();
void monster_punch2();
void monster_punch3();
void attack();
void banana_cat();
void monster2();
void monster3();
void happycat();



#endif

