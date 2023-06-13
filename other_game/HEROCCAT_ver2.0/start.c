#include "herocat.h"
#include "sound.h"


char screenBuf[70 * 24 + 1];
int width = 68;
int height = 24;
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
    border_line();
    titledraw();
    PlaySound(NULL, NULL, 0);
    PlaySound(TEXT(MUSIC_FILE_PATH2), NULL, SND_FILENAME | SND_ASYNC);
    scanf_s("%d", &input,10);
    
        if (input == 1)
        {
            gamestarte = 1;
            level = 1 ;
            gamestart();
        }
        if (input == 2)
        {  
            PlaySound(NULL, NULL, 0);
            PlaySound(TEXT(MUSIC_FILE_PATH2), NULL, SND_FILENAME | SND_ASYNC);
            system("cls");
            border_line();
            howplay();
            scanf_s("%d", &input2);

            while (isGamePlaying)
            {
                if (input2 == 1)
                { isGamePlaying = 1; break; } 
                else if (input2 == 2)
                {scanf_s("%d", &input2,10); continue;}
                else
                {scanf_s("%d", &input2,10); continue;}
            }
        }
        else if(input ==3)
        { 
            PlaySound(NULL, NULL, 0);
            PlaySound(TEXT(MUSIC_FILE_PATH2), NULL, SND_FILENAME | SND_ASYNC);
            system("cls");
            border_line();
            gameexit();
            scanf_s("%d", &input3, 10);

            while (isGamePlaying)
            {
                if (input3 == 1)
                {isGamePlaying = 0;}
                else if (input3 == 2)
                {isGamePlaying = 1; break; }
                else
                {scanf_s("%d", &input3, 10); continue;}
            }
        }
    }
}





