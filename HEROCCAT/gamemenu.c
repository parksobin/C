#include "herocat.h"

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

void titledraw()
{   
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //15: 하얀색
    SetCurrentCursorPos(12, 8);
    printf( "      ::::::::         :::     ::::::::::: ");
    SetCurrentCursorPos(12, 9);
    printf( "     :+:    :+:     :+: :+:       :+:     ");
    SetCurrentCursorPos(12, 10);
    printf( "    +:+           +:+   +:+     +:+       ");
    SetCurrentCursorPos(12, 11);
    printf( "   +#+          +#++:++#++:    +#+        ");
    SetCurrentCursorPos(12, 12);
    printf( "  +#+          +#+     +#+    +#+       ");
    SetCurrentCursorPos(12, 13);
    printf( "  ########    ###     ###   ###       ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    SetCurrentCursorPos(17, 15);
    printf("╔═══*.·:·.☽✧    ✦    ✧☾.·:·.*═══╗ ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    SetCurrentCursorPos(25, 17);
    printf("   1 게임 시작   ");    
    SetCurrentCursorPos(25, 18);
    printf("   2 게임 방법   ");
    SetCurrentCursorPos(25, 19);
    printf("   3 게임 종료   ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    SetCurrentCursorPos(17, 21);
    printf("╚═══*.·:·.☽✧    ✦    ✧☾.·:·.*═══╝");
    SetCurrentCursorPos(17, 21);
    printf("✦");
    SetCurrentCursorPos(17, 21);
    printf("✦");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);  
    SetCurrentCursorPos(7, 1);
    printf("✦      :::    :::   ::::::::::   :::::::::     :::::::: ");
    Sleep(100);
    SetCurrentCursorPos(7, 2);
    printf("      :+:    :+:   :+:          :+:    :+:   :+:    :+: ");
    Sleep(100);
    SetCurrentCursorPos(7, 3);
    printf("     +:+    +:+   +:+          +:+    +:+   +:+    +:+   ✦");
    Sleep(100);
    SetCurrentCursorPos(7, 4);
    printf("    +#++:++#++   +#++:++#     +#++:++#:    +#+    +:+ ");
    Sleep(100);
    SetCurrentCursorPos(7, 5);
    printf("✦  +#+    +#+   +#+          +#+    +#+   +#+    +#+ ");
    Sleep(100);
    SetCurrentCursorPos(7, 6);
    printf("  #+#    #+#   #+#          #+#    #+#   #+#    #+# ");
    Sleep(100);
    SetCurrentCursorPos(7, 7);
    printf(" ###    ###   ##########   ###    ###    ########  ✦");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    SetCurrentCursorPos(68, 24);
}

void howplay()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    SetCurrentCursorPos(18, 2);
    printf("╔═══*.·:·.☽✧    ✦    ✧☾.·:·.*═══╗");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    SetCurrentCursorPos(26, 4);
    printf("  게  임  설  명  ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    SetCurrentCursorPos(18, 6);
    printf("╚═══*.·:·.☽✧    ✦    ✧☾.·:·.*═══╝");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    Sleep(1000);
    SetCurrentCursorPos(17, 8);
    printf("캣마을의 히어로인 해피캣 당신이");
    SetCurrentCursorPos(9, 9);
    printf("세마리 몬스터에게 잡혀서 죽을 위기인 바나나캣을");
    SetCurrentCursorPos(8, 10);
    printf("살리기 위해 세개의 무기 중 하나를 선택하여 공격한다.");
    SetCurrentCursorPos(9, 11);
    printf("같은 무기여도 공격할 때마다 데미지는 다를 수 있다.");
    SetCurrentCursorPos(17, 12);
    printf("공격 순서 - 선: 해피캣 후: 몬스터");
    Sleep(500);
    SetCurrentCursorPos(25, 14);
    printf("[ 해피엔딩 조건 ]");
    SetCurrentCursorPos(11, 15);
    printf("- 3라운드로 이루어진 몬스터를 전부 물리쳤을 때");
    Sleep(500);
    SetCurrentCursorPos(25, 16);
    printf("[ 배드엔딩 조건 ]");
    SetCurrentCursorPos(3, 17);
    printf("- 해피캣의 생명력이 0이 되고 몬스터의 생명력도 0이 되었을 때");
    SetCurrentCursorPos(4, 18);
    printf("- 해피캣의 생명력이 0이 되고 몬스터의 생명력은 0이 아닐 때");
    Sleep(1000);
    SetCurrentCursorPos(19, 21);
    printf("메인화면으로 돌아가시겠습니까 ?");
    SetCurrentCursorPos(21, 22);
    printf("1 . 네    |    2 . 아니오");    
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);        
    SetCurrentCursorPos(0, 24);
}

void gameexit()
{   
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    SetCurrentCursorPos(18, 8);
    printf( "╔═══*.·:·.☽✧    ✦    ✧☾.·:·.*═══╗");
    SetCurrentCursorPos(18, 15);
    printf( "╚═══*.·:·.☽✧    ✦    ✧☾.·:·.*═══╝");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    Sleep(500);
    SetCurrentCursorPos(10, 10);
    printf( "          정말 게임을 종료하시겠습니까 ?        ");
    Sleep(500);
    SetCurrentCursorPos(10, 11);
    printf( "         종료시 게임이 저장되지 않습니다        ");
    Sleep(500);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    SetCurrentCursorPos(10, 13);
    printf( "             1 . 네     |  2 . 아니오           ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);        
    SetCurrentCursorPos(0, 24);
}
