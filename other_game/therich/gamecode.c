#include "therich.h"

int isgameplaying = 1;
int isgameplaying2 = 1;
int coin ;   //코인의 가격
int coin_num; //코인의 갯수
int percent; //코인의 %
int wallet;  //지갑


void coinprice()
{
    int randomNumber[300];
    int i;

    for (i = 0; i < 3; i++) {
        randomNumber[i] = rand() % 300+1 ;
    }
    coin = randomNumber[i - 1];
}


void coinpercent()
{
    int randomNumber[201];
    int i;
    srand((unsigned int)time(NULL));

    for (i = 0; i < 3; i++) {
        randomNumber[i] = rand() % 201 - 100 ; // -100~100
    }
    percent = randomNumber[i - 1];
}

int basic_code()
{
    system("cls");
    border_line();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //15: 하얀색
    SetCurrentCursorPos(2, 2);
    printf("지갑 : %d 원\n", wallet);
    SetCurrentCursorPos(2, 3);
    printf("코인 : %d 개\n", coin_num);
}

void game_start()
{
    int inputs;
    int inputs2;
    char ch;
    int loan;          // 대출
    int plus_money=0;  // 코인 가격 * %
    loan = wallet * 3; // 은행 대출 한도 
    wallet = 5000;

    while (isgameplaying)
    {   
        coinprice();
        coinpercent();
        basic_code();
        SetCurrentCursorPos(20, 22);
        printf("현재 코인의 가격은  %d 원 입니다.\n", coin);
        SetCurrentCursorPos(30, 24);
        printf("1. 코인 구매소\n");
        SetCurrentCursorPos(30, 25);
        printf("2. 코인 판매소\n");
        SetCurrentCursorPos(30, 26);
        printf("3. 은행\n");
        scanf("%d", &inputs);

        if (inputs == 1) 
        {   
            int ver = 1;
            int coin_buy;
            basic_code();
            SetCurrentCursorPos(30, 22);
            printf("코인을 구매할까요?");
            SetCurrentCursorPos(30, 24);
            printf("1  YES   |   2  NO");
            scanf("%d", &inputs2);
            if(inputs2 == 1)
            {   
                while (ver)
                {   
                    basic_code();
                    SetCurrentCursorPos(17, 21);
                    printf("현재 코인의 가격은  %d 원 입니다.\n", coin);
                    SetCurrentCursorPos(20, 22);
                    printf("코인을 얼마나 구매할까요?\n");
                    scanf("%d", &coin_buy);
                        if (wallet < coin *coin_buy)
                        {
                            basic_code();
                            SetCurrentCursorPos(20, 22);
                            printf("돈이 부족하시네요 다음에 오세요 ~\n");
                            Sleep(3000);
                            break;
                        }
                    basic_code();
                    coin_num = coin_num + coin_buy;
                    wallet = wallet - (coin * coin_buy);
                    SetCurrentCursorPos(20, 22);
                    printf("코인을 %d 개 구매했습니다.\n", coin_buy);
                    Sleep(3000);
                    break;
                }
            }
            if(inputs2 == 2)
            {
                basic_code();
                SetCurrentCursorPos(30, 22);
                printf("다음에 또 오세요 ~\n");
                Sleep(3000);
            }
        }

        if (inputs == 2)
        {   
            int ver = 1;
            int coin_sell;
            basic_code();
            SetCurrentCursorPos(30, 24);
            printf("코인을 판매할까요?");
            SetCurrentCursorPos(30, 24);
            printf("1  YES   |   2  NO");
            scanf("%d", &inputs2);
            if(inputs2 == 1)
            {   
                while (ver)
                {   
                    basic_code();
                    SetCurrentCursorPos(30, 24);
                    printf("코인을 얼마나 판매할까요?\n");
                    scanf("%d개\n", &coin_sell);
                    if (coin_num < coin_sell)
                    {   
                        basic_code();
                        SetCurrentCursorPos(20, 24);
                        printf("코인이 부족하시네요 다음에 오세요 ~\n");
                        Sleep(3000);
                        break;
                    }
                    basic_code();
                    coin_num = coin_num - coin_sell;
                    wallet = wallet - (coin * coin_sell);
                    SetCurrentCursorPos(20, 24);
                    printf("코인을 %d 개 판매했습니다.\n", coin_sell);
                    
                    Sleep(3000);
                    break;
                }
            }
            if(inputs2 == 2)
            {   
                basic_code();
                SetCurrentCursorPos(30, 24);
                printf("다음에 또 오세요 ~\n");
                Sleep(3000);
            }
            
        }

    
    }
}