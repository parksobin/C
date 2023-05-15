#include"otaku_quiz.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
   
    int game_state = 1;
    int input = 0;

    while (game_state)
    {
        system("cls");
        title();
        scanf("%d",&input);
        if(input==2)
        {
            system("cls");
            option();
            while(game_state)
            {
                scanf("%d",&input);
                if (input==1)
                {
                    system("cls");
                    title();
                    game_state=0;
                }
                else if(input==2)
                {
                    system("cls");
                    option();
                }
                else
                {
                    game_state=1;
                }
            }
            game_state=1;

        }
        if(input==3)
		{
                game_state=0;

        }
    }

	return 0;
}
