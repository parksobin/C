#include"otaku_quiz.h"
#include <stdio.h>


int option()
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

			else if(a==2&&b==10)
                        {
                                screen[b]='h';
                        }
                        else if(a==2&&b==11)
                        {
                                screen[b]='o';
                        }
                        else if(a==2&&b==12)
                        {
                                screen[b]='w';
                        }
                        else if(a==2&&b==14)
                        {
                                screen[b]='t';
                        }
                        else if(a==2&&b==15)
                        {
                                screen[b]='o';
                        }
                        else if(a==2&&b==17)
                        {
                                screen[b]='p';
                        }
                        else if(a==2&&b==18)
                        {
                                screen[b]='l';
                        }
                        else if(a==2&&b==19)
                        {
                                screen[b]='a';
                        }
                        else if(a==2&&b==20)
                        {
                                screen[b]='y';
                        }

						else if(a==4)
                        {
                                screen[b]='-';
                        }	
					
						else if(a==7&&b==3)
                        {
                                screen[b]='l';
                        }
						else if(a==7&&b==4)
                        {
                                screen[b]='o';
                        }
						else if(a==7&&b==5)
                        {
                                screen[b]='o';
                        }
						else if(a==7&&b==6)
                        {
                                screen[b]='k';
                        }
						else if(a==7&&b==8)
                        {
                                screen[b]='a';
                        }
						else if(a==7&&b==9)
                        {
                                screen[b]='t';
                        }
						else if(a==7&&b==11)
                        {
                                screen[b]='t';
                        }
						else if(a==7&&b==12)
                        {
                                screen[b]='h';
                        }
						else if(a==7&&b==13)
                        {
                                screen[b]='e';
                        }
						else if(a==7&&b==15)
                        {
                                screen[b]='q';
                        }
						else if(a==7&&b==16)
                        {
                                screen[b]='u';
                        }
						else if(a==7&&b==17)
                        {
                                screen[b]='e';
                        }
						else if(a==7&&b==18)
                        {
                                screen[b]='s';
                        }
						else if(a==7&&b==19)
                        {
                                screen[b]='t';
                        }
						else if(a==7&&b==20)
                        {
                                screen[b]='i';
                        }
						else if(a==7&&b==21)
                        {
                                screen[b]='o';
                        }
						else if(a==7&&b==22)
                        {
                                screen[b]='n';
                        }

						else if(a==8&&b==3)
                        {
                                screen[b]='a';
                        }
						else if(a==8&&b==4)
                        {
                                screen[b]='n';
                        }
						else if(a==8&&b==5)
                        {
                                screen[b]='d';
                        }else if(a==8&&b==7)
                        {
                                screen[b]='p';
                        }else if(a==8&&b==8)
                        {
                                screen[b]='r';
                        }
						else if(a==8&&b==9)
                        {
                                screen[b]='e';
                        }
						else if(a==8&&b==10)
                        {
                                screen[b]='s';
                        }
						else if(a==8&&b==11)
                        {
                                screen[b]='s';
                        }
						else if(a==8&&b==13)
                        {
                                screen[b]='t';
                        }else if(a==8&&b==14)
                        {
                                screen[b]='h';
                        }
						else if(a==8&&b==15)
                        {
                                screen[b]='e';
                        }
						else if(a==8&&b==17)
                        {
                                screen[b]='n';
                        }
						else if(a==8&&b==18)
                        {
                                screen[b]='u';
                        }
						else if(a==8&&b==19)
                        {
                                screen[b]='m';
                        }
						else if(a==8&&b==20)
                        {
                                screen[b]='b';
                        }
						else if(a==8&&b==21)
                        {
                                screen[b]='e';
                        }
						else if(a==8&&b==22)
                        {
                                screen[b]='r';
                        }

						else if(a==9&&b==3)
                        {
                                screen[b]='t';
                        }
						else if(a==9&&b==4)
                        {
                                screen[b]='o';
                        }
						else if(a==9&&b==6)
                        {
                                screen[b]='g';
                        }else if(a==9&&b==7)
                        {
                                screen[b]='u';
                        }else if(a==9&&b==8)
                        {
                                screen[b]='e';
                        }
						else if(a==9&&b==9)
                        {
                                screen[b]='s';
                        }
						else if(a==9&&b==10)
                        {
                                screen[b]='s';
                        }
						else if(a==9&&b==12)
                        {
                                screen[b]='t';
                        }
						else if(a==9&&b==13)
                        {
                                screen[b]='h';
                        }else if(a==9&&b==14)
                        {
                                screen[b]='e';
                        }
						else if(a==9&&b==16)
                        {
                                screen[b]='a';
                        }
						else if(a==9&&b==17)
                        {
                                screen[b]='n';
                        }
						else if(a==9&&b==18)
                        {
                                screen[b]='s';
                        }
						else if(a==9&&b==19)
                        {
                                screen[b]='w';
                        }
						else if(a==9&&b==20)
                        {
                                screen[b]='e';
                        }
						else if(a==9&&b==21)
                        {
                                screen[b]='r';
                        }
						else if(a==9&&b==22)
                        {
                                screen[b]='.';
                        }

						else if(a==10&&b==3)
                        {
                                screen[b]='b';
                        }
						else if(a==10&&b==4)
                        {
                                screen[b]='e';
                        }
						else if(a==10&&b==6)
                        {
                                screen[b]='t';
                        }else if(a==10&&b==7)
                        {
                                screen[b]='h';
                        }else if(a==10&&b==8)
                        {
                                screen[b]='e';
                        }
						else if(a==10&&b==10)
                        {
                                screen[b]='b';
                        }
						else if(a==10&&b==11)
                        {
                                screen[b]='e';
                        }
						else if(a==10&&b==12)
                        {
                                screen[b]='s';
                        }else if(a==10&&b==13)
                        {
                                screen[b]='t';
                        }
						else if(a==10&&b==15)
                        {
                                screen[b]='O';
                        }
						else if(a==10&&b==16)
                        {
                                screen[b]='T';
                        }				
						else if(a==10&&b==17)
                        {
                                screen[b]='A';
                        }
						else if(a==10&&b==18)
                        {
                                screen[b]='K';
                        }
						else if(a==10&&b==19)
                        {
                                screen[b]='U';
                        }
						else if(a==10&&b==20)
                        {
                                screen[b]='!';
                        }
						else if(a==10&&b==21)
                        {
                                screen[b]='!';
                        }
						else if(a==10&&b==22)
                        {
                                screen[b]='!';
                        }

                        			else if(a==13&&b==6)
                        {
                                screen[b]='r';
                        }
                        			else if(a==13&&b==7)
                        {
                                screen[b]='e';
                        }
                        			else if(a==13&&b==8)
                        {
                                screen[b]='t';
                        }
                        			else if(a==13&&b==9)
                        {
                                screen[b]='u';
                        }
                        			else if(a==13&&b==10)
                        {
                                screen[b]='r';
                        }
                        			else if(a==13&&b==11)
                        {
                                screen[b]='n';
                        }
                        			else if(a==13&&b==13)
                        {
                                screen[b]='t';
                        }
                        			else if(a==13&&b==14)
                        {
                                screen[b]='o';
                        }
                        			else if(a==13&&b==16)
                        {
                                screen[b]='m';
                        }
                        			else if(a==13&&b==17)
                        {
                                screen[b]='e';
                        }
                        			else if(a==13&&b==18)
                        {
                                screen[b]='n';
                        }
                        			else if(a==13&&b==19)
                        {
                                screen[b]='u';
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
