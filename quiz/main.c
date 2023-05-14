#include"otaku_quiz.h"
#include <stdio.h>

int title()
{
        char screen[500];

        int a = 0;
        while(a<15)
        {
                int b = 0;
                while(b<30)
                {
                        if(a==0||a==14)
                        {
                                screen[b]='_';
                        }
                        else if(b==0||b==29)
                        {
                                screen[b]='|';
                        }
			else if(a==1)
                        {
                                screen[b]='~';
                        }
			else if(a==4)
                        {
                                screen[b]='~';
                        }	

			else if(a==2&&b==12)
                        {
                                screen[b]='O';
                        }
			else if(a==2&&b==13)
                        {
                                screen[b]='t';
                        }
			else if(a==2&&b==14)
                        {
                                screen[b]='a';
                        }
			else if(a==2&&b==15)
                        {
                                screen[b]='k';
                        }
			else if(a==2&&b==16)
                        {
                                screen[b]='u';
                        }

			else if(a==3&&b==8)
                        {
                                screen[b]='!';
                        }
			else if(a==3&&b==9)
                        {
                                screen[b]='~';
                        }
			else if(a==3&&b==11)
			{
				screen[b]='Q';
			}
			else if(a==3&&b==13)
                        {
                                screen[b]='U';
                        }
			else if(a==3&&b==15)
                        {
                                screen[b]='I';
                        }
			else if(a==3&&b==17)                        			 {        
				screen[b]='Z';
                        }
			else if(a==3&&b==19)
                        {
                                screen[b]='~';
                        }
		 	else if(a==3&&b==20)
                        {
                                screen[b]='!';
                        }

                      else if(a==8&&b==10)
                        {
                                screen[b]='1';
                        }
                        else if(a==8&&b==11)
                        {
                                screen[b]='.';
                        }
                        else if(a==8&&b==12)
                        {
                                screen[b]='s';
                        }
                        else if(a==8&&b==13)
                        {
                                screen[b]='t';
                        }
                        else if(a==8&&b==14)
                        {
                                screen[b]='a';
                        }
                        else if(a==8&&b==15)
                        {
                                screen[b]='r';
                        }
                        else if(a==8&&b==16)
                        {
                                screen[b]='t';
                        }
                        
                        else if(a==9&&b==8)
                        {
                                screen[b]='2';
                        }
                        else if(a==9&&b==9)
                        {
                                screen[b]='.';
                        }
                        else if(a==9&&b==10)
                        {
                                screen[b]='h';
                        }
                        else if(a==9&&b==11)
                        {
                                screen[b]='o';
                        }
                        else if(a==9&&b==12)
                        {
                                screen[b]='w';
                        }
                        else if(a==9&&b==14)
                        {
                                screen[b]='t';
                        }
                        else if(a==9&&b==15)
                        {
                                screen[b]='o';
                        }
                        else if(a==9&&b==17)
                        {
                                screen[b]='p';
                        }
                        else if(a==9&&b==18)
                        {
                                screen[b]='l';
                        }
                        else if(a==9&&b==19)
                        {
                                screen[b]='a';
                        }
                        else if(a==9&&b==20)
                        {
                                screen[b]='y';
                        }

                        else if(a==10&&b==10)
                        {
                                screen[b]='3';
                        }
                        else if(a==10&&b==11)
                        {
                                screen[b]='.';
                        }
                        else if(a==10&&b==12)
                        {
                                screen[b]='e';
                        }
                        else if(a==10&&b==13)
                        {
                                screen[b]='x';
                        }
                        else if(a==10&&b==14)
                        {
                                screen[b]='i';
                        }
                        else if(a==10&&b==15)
                        {
                                screen[b]='t';
                        }

                        else
				screen[b]=' ';
                        {
                        b+=1;
			}
                }

                screen[30]='\n';
                a+=1;
                printf("%s",screen);
        }

        return 0;
}



