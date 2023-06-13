#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>


#define _yuhan_c_window_user

#ifdef _yuhan_c_window_user
 #include <Windows.h>
 #endif 

#ifdef _yuhan_c_mac_user
#include <Windows.h>
#endif 



int main(void)
{
	clock_t SJTSTART;
	SJTSTART= clock;

	int i = 0;

	while (i < 10) {
		/*system("cls");*/

		COORD pos = { 0,0 };
		//커서 이동
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

		printf("지금은 %d \n", i + 1, (int)SJTSTART);
		

		printf("수정이의 분노 \n");

		int j = 0;
		while (j < i) {
			printf("#");
			j = j+1;
		}
		
		Sleep(100);
		i = i + 1;
	}



	clock_t SJTSTAR;
	SJTSTAR= clock;

	printf("지금은 %d \n", i + 1, (int)SJTSTART);
	printf("%d 만큼 화를 냈는데 지치지 않는다 \n", (double)SJTSTAR- SJTSTART);

	char input[10];
	scanf_s("%s", &input,10);

	

	return 0;
}




