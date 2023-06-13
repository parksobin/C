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
    int playerX =1, playerY=1;  // 플레이어의 위치 좌표
    int npcX=8, npcY=6; 
    
    
    while (isGamePlaying)
    { 
    RemoveCursor();
    system("cls");
    clearBuffer(screenBuf, width, height);
    printf("%s\n", screenBuf);
    titledraw();
    scanf("%d", &input);
        if (input == 1)
        {   
            int go = 0;
            RemoveCursor();
            system("cls");
            clearBuffer(screenBuf, width, height);
            printf("%s\n", screenBuf);
            while(go ==0)
            {
            drawMap();
            handleInput();
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





