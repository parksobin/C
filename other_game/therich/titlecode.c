#include "therich.h"

int isGamePlaying = 1;

extern int gamestarte ;
extern int level ;

void realstart()
{ 
    int input;
    int input2;
    int input3;
    while (isGamePlaying)
    { 
    RemoveCursor();
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    otaku();
    border_line();
    gamemenu();
    scanf("%d", &input);
    
        if (input == 1)
        {
            game_start();
        }
        else if (input == 2)
        {  
            system("cls");
            border_line();
            playhow();
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
        { 
            system("cls");
            border_line();
            realexit();
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