#include "herocat.h"

char screenBuf[70 * 24 + 1];
int width = 68;
int height = 24;
int isGamePlaying = 1;

// 이 변수들이 다른 소스 파일에서 정의되었음을 나타냅니다. 
//따라서 이 코드를 사용하는 소스 파일에서는 해당 변수들을 직접 정의하지 않고,
// 다른 소스 파일에서 정의된 변수를 사용할 수 있습니다.
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
    scanf("%d", &input);

        if (input == 1)
        {
            gamestarte = 1;
            level = 1 ;
            gamestart();
        }
        if (input == 2)
        {  
            system("cls");
            border_line();
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
        { 
            system("cls");
            border_line();
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





