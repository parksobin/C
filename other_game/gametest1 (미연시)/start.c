#include "oshinoko.h"


void realstart()
{   
    char screenBuf[70 * 24 + 1];
    int width = 68;
    int height = 24;
    int isGamePlaying = 1;
    int input;
    int input2;
    int input3;
    

    // 인지도 함수 선언 (초기화)
    int lovepoint = 0;


    while (isGamePlaying)
    { 
    RemoveCursor();
    system("cls");
    clearBuffer(screenBuf, width, height);
    printf("%s\n", screenBuf);
    titledraw();
    scanf("%d", &input);

        // 게임시작
         if (input == 1)
         {
            system("cls");      /*화면 초기화*/
            Sleep (100);        /*.1초 대기*/
            int while1 = 1;     /*while문을 작동 시키기 위한 함수*/
            int a =0;           /*if 조건문을 실행하기 위한 함수*/

            while (while1 = 1)   /*정말 게임 화면 시작*/
            {   
                system("cls");
                clearBuffer(screenBuf, width, height);
                printf("%s\n", screenBuf);
                SetCurrentCursorPos(50, 2);    /*커서 초기화(맨 아래로 옮기기)*/
                printf("현재 인지도 : %d", lovepoint);   /*현재 인지도를 출력*/
                Sleep(1000);  /*1초 대기  /  개인적으로 이 사이에 sleep 전에 스토리화면 출력하면 더 예쁠듯*/
                int textnum = 0;   /*상황에서 번호를 입력받기 위해 사용하는 함수*/

                if (a ==0)
                {   
                    system("cls");
                    clearBuffer(screenBuf, width, height);
                    printf("%s\n", screenBuf);
                    text1();
                    SetCurrentCursorPos(50, 2);
                    printf("현재 인지도 : %d", lovepoint);
                    SetCurrentCursorPos(0, 24);
                    scanf("%d", &textnum);    /*상황에서 번호를 입력받기 위해 사용하는 함수*/
                    switch (textnum)    /*textnum의 숫자에 따른 조건*/
                    {
                    case 1:  /*textnum이1이라면 lovepoint에 15를 더해 lovepoint에 저장*/
                        lovepoint = lovepoint + 15;
                        a = 1;  /* a의 값을 1로 넣어 while문으로 돌아갔을 때 a==1인 상황을 실행하도록하는 함수*/
                        continue;
                    case 2:  /*textnum이2라면 lovepoint에 10를 더해 lovepoint에 저장*/
                        lovepoint = lovepoint + 10;
                        a = 1;
                        continue;
                    case 3:  /*textnum이3이라면 lovepoint에 5를 더해 lovepoint에 저장*/
                        lovepoint = lovepoint + 5;
                        a = 1;
                        continue;   
                    default:
                        continue;
                    }
                    break;
                }
                else if (a = 1)
                {   
                    system("cls");
                    clearBuffer(screenBuf, width, height);
                    printf("%s\n", screenBuf);
                    text2();
                    SetCurrentCursorPos(50, 2);
                    printf("현재 인지도 : %d", lovepoint);
                    SetCurrentCursorPos(0, 24);
                    scanf("%d", &textnum);
                    switch (textnum)
                    {
                    case 1:
                        lovepoint = lovepoint + 10;
                        continue;
                    case 2:
                        lovepoint = lovepoint + 5;
                        continue;
                    case 3:
                        lovepoint = lovepoint + 15;
                        continue;   
                    default:
                        continue;
                    }
                    break;
                }
                while1 = 0;
            }
         }
         else if (input == 2)
        {  
            system("clear");
            system("cls");
            clearBuffer(screenBuf, width, height);
            printf("%s\n", screenBuf);
            howplay();
            scanf("%d", &input2);

            while (isGamePlaying)
            {
                if (input2 == 1)
                { isGamePlaying = 1; break; } 
                else if (input2 == 2)
                {scanf("%d", &input2); continue;}
                else
                {scanf("%d", &input2); continue;}
            }
        }
        else if(input ==3)
        {system("clear"); system("cls");
         clearBuffer(screenBuf, width, height);
         printf("%s\n", screenBuf);
         gameexit();
         scanf("%d", &input3);

            while (isGamePlaying)
            {
                if (input3 == 1)
                {isGamePlaying = 0;}
                else if (input3 == 2)
                {isGamePlaying = 1; break; }
                else
                {scanf("%d", &input3); continue;}
            }
        }
    }
}





