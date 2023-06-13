#include "oshinoko.h"

    void text1()
    {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //15: 하얀색
    SetCurrentCursorPos(55, 8);
    printf("1. 15점");
    SetCurrentCursorPos(55, 9);
    printf("2. 10점");
    SetCurrentCursorPos(55, 10);
    printf("3. 5점");
    SetCurrentCursorPos(2, 11);
    printf("----------------------------------------------------------------");
    SetCurrentCursorPos(3, 12);
    printf( "이름");
    SetCurrentCursorPos(3, 14);
    printf( "대충 플레이어에게 내는 문제다 이자시가 !!"); 
    }

    void text2()
    {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //15: 하얀색
    SetCurrentCursorPos(55, 8);
    printf("1. 10점");
    SetCurrentCursorPos(55, 9);
    printf("2. 5점");
    SetCurrentCursorPos(55, 10);
    printf("3. 15점");
    SetCurrentCursorPos(2, 11);
    printf("----------------------------------------------------------------");
    SetCurrentCursorPos(3, 12);
    printf( "이름");
    SetCurrentCursorPos(3, 14);
    printf( "대충 플레이어에게 내는 두번째 문제라능 ♥"); 
    }

 