#include "oshinoko.h"

void SetCurrentCursorPos(int x, int y)  // 커서의 위치를 설정하는 함수
{
COORD position = { x, y };
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void RemoveCursor(void)                 // 깜박이는 커서를 제거하기 위한 함수
{
    CONSOLE_CURSOR_INFO current_info;
    GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &current_info);
    current_info.bVisible = 0;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &current_info);
}