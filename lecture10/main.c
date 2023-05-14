#include <stdio.h>

int main()
{
	char screen[500];/*가로: 30 세로:15*/

	int i=0;
	while(i<450)
	{
		screen[i]='*';
		i=i+1;
		
	}

	int b=0;
	while(b<15)
	{
		b=b+1;
		screen[30]='\0';
		printf("%s\n",screen);
	
	}


	

return 0;
}
