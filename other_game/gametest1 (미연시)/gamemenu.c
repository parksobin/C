#include "oshinoko.h"

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

void delay_print(char *str)  // 프린트 딜레이를 주는 함수
{
    for (char *p = str; *p; p++) {
        putchar(*p);
        fflush(stdout);
        Sleep(5);
    }
    putchar('\n');
}

void titledraw()
{   
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //15: 하얀색
    SetCurrentCursorPos(13, 8);
    printf( "_|      _|    _|_|        _|    _|    _|_|    ");
    SetCurrentCursorPos(13, 9);
    printf( "_|_|    _|  _|    _|      _|  _|    _|    _|  ");
    SetCurrentCursorPos(13, 10);
    printf( "_|  _|  _|  _|    _|      _|_|      _|    _|  ");
    SetCurrentCursorPos(13, 11);
    printf( "_|    _|_|  _|    _|      _|  _|    _|    _|  ");
    SetCurrentCursorPos(13, 12);
    printf( "_|      _|    _|_|        _|    _|    _|_|    ");
    SetCurrentCursorPos(25, 15);
    printf("------------------");
    SetCurrentCursorPos(25, 16);
    printf("|   1.게임 시작   |");    
    SetCurrentCursorPos(25, 17);
    printf("|   2.게임 방법   |");
    SetCurrentCursorPos(25, 18);
    printf("|   3.게임 종료   |");
    SetCurrentCursorPos(25, 19);
    printf("------------------");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);  //13: 분홍색
    SetCurrentCursorPos(18, 2);
    delay_print("    ____   _____ _    _ _____    ");
    SetCurrentCursorPos(18, 3);
    delay_print("   / __ \\ / ____| |  | |_   _|    ");
    SetCurrentCursorPos(18, 4);
    delay_print("  | |  | | (___ | |__| | | |        ");
    SetCurrentCursorPos(18, 5);
    delay_print("  | |  | |\\___ \\|  __  | | |         ");
    SetCurrentCursorPos(18, 6);
    delay_print("  | |__| |____) | |  | |_| |_         ");
    SetCurrentCursorPos(18, 7);
    delay_print("  \\_____/|_____/|_|  |_|_____|   ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    SetCurrentCursorPos(68, 24);
}

void howplay()
{
    SetCurrentCursorPos(20, 3);
    printf("________________________");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    SetCurrentCursorPos(23, 5);
    printf("  게  임  방  법  ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    SetCurrentCursorPos(20, 6);
    printf("________________________");
    SetCurrentCursorPos(4, 10);
    delay_print("이제 막 데뷔하게 된 호시노 아이를 궁극의 아이돌로 만들자 !");
    SetCurrentCursorPos(6, 11);
    delay_print("각종 스케줄에서 벌어지는 이벤트들에 알맞은 답변을 하여");
    SetCurrentCursorPos(4, 12);
    delay_print("대중들과 팬들의 호감도를 올려 최고의 아이돌로 만들어보자 !!");
    Sleep(500);
    SetCurrentCursorPos(19, 20);
    printf("메인화면으로 돌아가시겠습니까 ?");
    SetCurrentCursorPos(21, 21);
    printf("1 . 네    |    2 . 아니오");    
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);        
    SetCurrentCursorPos(0, 24);
}

void gameexit()
{
    SetCurrentCursorPos(10, 8);
    printf( "------------------------------------------------");
    SetCurrentCursorPos(10, 15);
    printf( "------------------------------------------------");
    SetCurrentCursorPos(10, 10);
    delay_print( "          정말 게임을 종료하시겠습니까 ?        ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    SetCurrentCursorPos(10, 11);
    delay_print( "         종료시 게임이 저장되지 않습니다 .      ");
    Sleep(500);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    SetCurrentCursorPos(10, 13);
    printf( "           1 . 네     |    2 . 아니오           ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);        
    SetCurrentCursorPos(0, 24);
}
