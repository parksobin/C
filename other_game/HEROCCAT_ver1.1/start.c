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
    Sleep(1000);
    PlaySound(NULL, NULL, 0);
    scanf("%d", &input);
    
        if (input == 1)
        {
            gamestarte = 1;
            level = 1 ;
            gamestart();
        }
        else if (input == 2)
        {  
            PlaySound(TEXT(MUSIC_FILE_PATH2), NULL, SND_FILENAME | SND_ASYNC);
            system("cls");
            border_line();
            howplay();
            scanf("%d", &input2);
            while (isGamePlaying)
            {
                if (input2 == 1)
                { isGamePlaying = 1;  
                PlaySound(TEXT(MUSIC_FILE_PATH2), NULL, SND_FILENAME | SND_ASYNC);
                break; } 
                else if (input2 == 2)
                {scanf("%d", &input2); continue;}
                else
                {scanf("%d", &input2); continue;}
            }
        }
        else if(input ==3)
        { 
            PlaySound(NULL, NULL, 0);
            PlaySound(TEXT(MUSIC_FILE_PATH2), NULL, SND_FILENAME | SND_ASYNC);
            system("cls");
            border_line();
            gameexit();
            scanf("%d", &input3);

            while (isGamePlaying)
            {
                if (input3 == 1)
                {isGamePlaying = 0;}
                else if (input3 == 2)
                {isGamePlaying = 1; 
                PlaySound(TEXT(MUSIC_FILE_PATH2), NULL, SND_FILENAME | SND_ASYNC);
                break; }
                else
                {scanf("%d", &input3); continue;}
            }
        }
    }
}





