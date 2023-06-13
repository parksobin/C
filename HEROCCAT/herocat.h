#ifndef HEROCAT_H
#define HEROCAT_H
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h> //srand, rand를 사용하기 위한 헤더파일


//    cursor.c
void SetCurrentCursorPos(int x, int y);
void RemoveCursor(void);



//    gamemenu.c
void clearBuffer(char* screenBuf, int width, int height);
void titledraw();
void howplay();
void gameexit();

//    start.c
void realstart();

// char.c
void weapon();
void banana_cat();
void monster();
void monster2();
void monster3();
void happycat();
void attack_char1();
void attack_char2();
void attack_char3();
void attack_text();

void sad_ending();
void happy_ending();

void ROUND1();
void ROUND2();
void FINALROUND();

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
void border_line();
void monster_punch();
void attack1();
void attack2();
void attack3();

void basic_graphic();
void fight_num_basic();
void fight_num_basic2();

void heart_zero();
void monster_heart_zero();
void all_zero();




#endif

