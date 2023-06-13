#include <stdio.h>
#include <Windows.h>


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


 void SetCurrentCursorPos(int x, int y)  // 커서의 위치를 설정하는 함수
{
COORD position = { x, y };
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
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


void RemoveCursor(void)                 // 깜박이는 커서를 제거하기 위한 함수
{
    CONSOLE_CURSOR_INFO current_info;
    GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &current_info);
    current_info.bVisible = 0;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &current_info);
}






int main()
{
    char screenBuf[70 * 24 + 1];
    int width = 68;
    int height = 24;
    int isGamePlaying = 1;

    int input;
    int input2;
    int input3;

    while (isGamePlaying)
    { 
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //15: 하얀색
    clearBuffer(screenBuf, width, height);
    printf("%s\n", screenBuf);
    
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
    scanf("%d", &input);

        if (input == 2)
        {  
            system("clear");
            system("cls");
            clearBuffer(screenBuf, width, height);
            printf("%s\n", screenBuf);
            

            SetCurrentCursorPos(20, 3);
            delay_print("________________________");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
            SetCurrentCursorPos(23, 5);
            delay_print("  게  임  방  법  ");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            SetCurrentCursorPos(20, 6);
            delay_print("________________________");

            SetCurrentCursorPos(4, 10);
            delay_print("Become the most perfect idol! in the country by gaining");
            SetCurrentCursorPos(3, 11);
            delay_print("popularity! The way to play it. is to choose what the public");
            SetCurrentCursorPos(20, 12);
            delay_print("wants and build awareness!!");

            Sleep(500);
            SetCurrentCursorPos(19, 20);
            printf("메인화면으로 돌아가시겠습니까 ?");
            SetCurrentCursorPos(21, 21);
            printf("1 . 네    |    2 . 아니오");    
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);        
            SetCurrentCursorPos(0, 24);
            scanf("%d", &input2);
            

            while (isGamePlaying)
            {
                
                if (input2 == 1)
                {   
                    isGamePlaying = 1;
                    break;  // while 루프 탈출
                }
                else if (input2 == 2)
                {   
                    scanf("%d", &input2);
                   continue;
                }
                else
                {
                    scanf("%d", &input2);
                    continue;
                }
            }
        }
        else if(input ==3)
        {
            system("clear");
            system("cls");
            clearBuffer(screenBuf, width, height);
            printf("%s\n", screenBuf);
                        
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
            scanf("%d", &input3);
            fflush(stdin);

            while (isGamePlaying)
            {
                
                if (input3 == 1)
                {   
                    isGamePlaying = 0;
                }
                else if (input3 == 2)
                {
                   isGamePlaying = 1;
                    break;  // while 루프 탈출
                }
                else
                {
                    scanf("%d", &input3);
                    continue;
                }
            }
        }


    }
    return 0;
}