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
		//Ŀ�� �̵�
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

		printf("������ %d \n", i + 1, (int)SJTSTART);
		

		printf("�������� �г� \n");

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

	printf("������ %d \n", i + 1, (int)SJTSTART);
	printf("%d ��ŭ ȭ�� �´µ� ��ġ�� �ʴ´� \n", (double)SJTSTAR- SJTSTART);

	char input[10];
	scanf_s("%s", &input,10);

	

	return 0;
}




