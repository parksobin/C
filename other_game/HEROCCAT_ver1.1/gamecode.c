#include "herocat.h"
#include "sound.h"

int heart = 100;
int moster_heart = 100;
char playername [10];
int fight_num = 0;
int gamestarte = 1;
int level = 1;


// 이 변수들이 다른 소스 파일에서 정의되었음을 나타냅니다. 
//따라서 이 코드를 사용하는 소스 파일에서는 해당 변수들을 직접 정의하지 않고,
// 다른 소스 파일에서 정의된 변수를 사용할 수 있습니다.

extern int isGamePlaying ;


void monster_gauge()
{
    SetCurrentCursorPos(3, 2);
    printf("몬스터의 생명  :   %d", moster_heart);
}

void heart_gauge(){
    SetCurrentCursorPos(3, 1);
    printf("%s의 생명  :   %d", playername,heart);
}

void loading_text()
{
    SetCurrentCursorPos(20, 4);
    delay_print("* 게 임 을 시 작 합 니 다 *");
    SetCurrentCursorPos(20, 5);
    delay_print("당신의 이름을 입력해주세요");
    SetCurrentCursorPos(19, 6);
    delay_print("(영어 / 숫자로만 가능합니다.)");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    SetCurrentCursorPos(16, 12);
    printf("╔═══*.·:·.☽✧    ✦    ✧☾.·:·.*═══╗");
    SetCurrentCursorPos(16, 17);
    printf("╚═══*.·:·.☽✧    ✦    ✧☾.·:·.*═══╝");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    SetCurrentCursorPos(30, 14);
    scanf("%s", playername);
}

void name_text()
{   
    SetCurrentCursorPos(10, 8);
    printf("%s님, 당신은 고양이 세계의 영웅 해피캣입니다.", playername);
    SetCurrentCursorPos(13, 9);
    delay_print("바나나캣을 구해 행복한 세계를 만드세요!");
    Sleep(1500);
}

void line()
{   
    SetCurrentCursorPos(2, 14);
    printf("----------------------------------------------------------------");
}

void normal_botton()
{
    SetCurrentCursorPos(13, 18);
    printf("1");
    SetCurrentCursorPos(34, 18);
    printf("2");
    SetCurrentCursorPos(54, 18);
    printf("3");
    SetCurrentCursorPos(2, 15);
    printf("공격할 무기를 입력하세요 : ");
}

void chapter1()
{
    SetCurrentCursorPos(15, 17);
    printf("바나나캣이 몬스터에게 잡혀 있어요 !");
    SetCurrentCursorPos(15, 18);
    printf("공격을 통해 바나나캣을 구해주세요 !");
}


void monster_punch()
{   
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    int randomNumber[20];
    int i;
    for (i = 10; i < 20; i++) {
        randomNumber[i] = rand() % 30 + 10; // 난수값의 범위를 10~40으로 설정
    }
    SetCurrentCursorPos(10, 18);
    printf("몬스터의 공격으로 %d 데미지를 입었어요ㅜㅜ", randomNumber[i - 1]);
    heart = heart - randomNumber[i - 1];
}

void attack1()
{   
    int randomNumber[20];
    int i;
    for (i = 0; i < 10; i++) {
        randomNumber[i] = rand() % 20 + 20; // 난수값의 범위를 20~ 39으로 설정
    }
    SetCurrentCursorPos(15, 18);
    printf("몬스터에게 %d 데미지를 입혔어요!", randomNumber[i-1]);
    moster_heart = moster_heart - randomNumber[i-1] ;   
}

void attack2()
{   
    int randomNumber[40];
    int i;
    for (i = 0; i < 10; i++) {
        randomNumber[i] = rand() %  40+ 20; // 난수값의 범위를 20~59으로 설정
    }
    SetCurrentCursorPos(15, 18);
    printf("몬스터에게 %d 데미지를 입혔어요!", randomNumber[i-1]);
    moster_heart = moster_heart - randomNumber[i-1] ;   
}

void attack3()
{   
    int randomNumber[30];
    int i;
    for (i = 0; i < 10; i++) {
        randomNumber[i] = rand() % 30 + 30; // 난수값의 범위를 30~59으로 설정
    }
    SetCurrentCursorPos(15, 18);
    printf("몬스터에게 %d 데미지를 입혔어요!", randomNumber[i-1]);
    moster_heart = moster_heart - randomNumber[i-1] ;   
}


void fight_num_basic()
{
    PlaySound(NULL, NULL, 0);
    system("cls");
    border_line();
    monster_gauge();
    heart_gauge();
    line();
}

void fight_num_basic2()
{
    Sleep(2000);
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    border_line();
    monster_gauge();
    heart_gauge();
    line();
    banana_cat();
    monster_punch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}


void heart_zero()
{
    system("cls");
    PlaySound(NULL, NULL, 0);
    PlaySound(TEXT(MUSIC_FILE_PATH1), NULL, SND_FILENAME | SND_ASYNC);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    border_line();
    monster_gauge();
    heart_gauge();
    line();
    banana_cat();
    SetCurrentCursorPos(10, 17);
    printf("몬스터에게 당해 해피캣과 바나나캣은 죽었습니다..");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void monster_heart_zero()
{
    PlaySound(NULL, NULL, 0);
    PlaySound(TEXT(MUSIC_FILE_PATH3), NULL, SND_FILENAME | SND_ASYNC);
    system("cls");
    border_line();
    monster_gauge();
    heart_gauge();
    line();
    happycat();
    banana_cat();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //yellow
    SetCurrentCursorPos(15, 17);
    printf("몬스터를 해치우고 바나나캣을 구했어요!!");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    level =level +1;
    Sleep(4000);
}

void basic_graphic()
{
    system("cls");
    PlaySound(NULL, NULL, 0);
    PlaySound(TEXT(MUSIC_FILE_PATH1), NULL, SND_FILENAME | SND_ASYNC);
    border_line();
    monster_gauge();
    heart_gauge();
    line();
    normal_botton();
    weapon();
    banana_cat();    
}


void chapter1_fight()
{   
    while (level ==1)
    {   heart = 100;
        moster_heart = 100;
        PlaySound(NULL, NULL, 0);
        int ver = 1;
        while (ver == 1)
        {   
        if (moster_heart <=0 && heart <=0)
            {
                heart_zero();
                monster();
                Sleep(4000);
                sad_ending();
                ver = 0;
                level =0;
                gamestarte = 0;
                isGamePlaying = 1;
                break;           
            }
        if (moster_heart <=0)
            {
                monster_heart_zero();
            break;
            }
        if (heart <=0)
            {
                heart_zero();
                monster();
                Sleep(4000);
                sad_ending();
                ver = 0;
                level =0;
                gamestarte = 0;
                isGamePlaying = 1;
                break;            
            }
        basic_graphic();
        monster();
        SetCurrentCursorPos(28, 15);
        scanf("%d", &fight_num);
        
        if (fight_num ==1)
            {
                fight_num_basic();
                monster();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                attack_char1();
                attack_text();
                Sleep(1000);
                attack1();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                monster();
                fight_num_basic2();
                monster();
                Sleep(3000);          
                continue;
            }
        else if (fight_num ==2)
            {
                fight_num_basic();
                monster();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                attack_char2();
                attack_text();
                Sleep(1000);
                attack2();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                monster();
                fight_num_basic2();
                monster();
                Sleep(3000);
                continue;
            }
        else if (fight_num ==3)
            {
                fight_num_basic();
                monster();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                attack_char3();
                attack_text();
                Sleep(1000);
                attack3();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                monster();
                fight_num_basic2();
                monster();
                Sleep(3000);
            continue;
            }
        else continue;
        }
    }

    while (level ==2)
    {  
        PlaySound(NULL, NULL, 0);
        heart = 100;
        moster_heart = 150;
        int ver = 1;
        while (ver ==1)
        {
        if (moster_heart <=0 && heart <=0)
            {
                heart_zero();
                monster2();
                Sleep(4000);
                sad_ending();
                ver = 0;
                level =0;
                gamestarte = 0;
                isGamePlaying = 1;
                break;           
            }
        if (moster_heart <=0)
        {
            monster_heart_zero();
            break;
        }
        if (heart <=0)
        {
            heart_zero();
            monster2();
            Sleep(4000);
            sad_ending();
            ver = 0;
            level =0;
            gamestarte = 0;
            isGamePlaying = 1;
            break;          
        }
        
        basic_graphic();
        monster2();
        SetCurrentCursorPos(28, 15);
        scanf("%d", &fight_num);

        if (fight_num ==1)
            {
                fight_num_basic();
                monster2();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                attack_char1();
                attack_text();
                Sleep(1000);
                attack1();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                monster2();
                fight_num_basic2();
                monster2();
                Sleep(3000);
                continue;
            }
        else if (fight_num ==2)
            {
                fight_num_basic();
                monster2();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                attack_char2();
                attack_text();
                Sleep(1000);
                attack2();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                monster2();
                fight_num_basic2();
                monster2();
                Sleep(3000);
                continue;
            }
        else if (fight_num ==3)
            {
                fight_num_basic();
                monster2();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                attack_char3();
                attack_text();
                Sleep(1000);
                attack3();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                monster2();
                fight_num_basic2();
                monster2();
                Sleep(3000);
                continue;
            }
        else continue;
        
        }
        
        
    }
    while (level ==3)
    {   
        heart = 100;
        moster_heart = 200;
        int ver = 1;
        while (ver =1)
        {
            if (moster_heart <=0 && heart <=0)
            {
                heart_zero();
                monster3();
                Sleep(4000);
                sad_ending();
                ver = 0;
                level =0;
                gamestarte = 0;
                isGamePlaying = 1;
                break;           
            }
            if (moster_heart <=0)
            {
                monster_heart_zero();
                happy_ending();
                ver = 0;
                level =0;
                gamestarte = 0;
                isGamePlaying = 1;
                break; 

            }
            if (heart <=0)
            {
                heart_zero();
                monster3();
                Sleep(4000);
                sad_ending();
                ver = 0;
                level =0;
                gamestarte = 0;
                isGamePlaying = 1;
                break;           
            }

            basic_graphic();
            monster3();
            SetCurrentCursorPos(28, 15);
            scanf("%d", &fight_num);

            if (fight_num ==1)
            {
                fight_num_basic();
                monster3();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                attack_char1();
                attack_text();
                Sleep(1000);
                attack1();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                monster3();
                fight_num_basic2();
                monster3();
                Sleep(3000);
                continue;
            }
            else if (fight_num ==2)
            {
                fight_num_basic();
                monster3();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                attack_char2();
                attack_text();
                Sleep(1000);
                attack2();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                monster3();
                fight_num_basic2();
                monster3();
                Sleep(3000);
                continue;
            }
            else if (fight_num ==3)
            {
                fight_num_basic();
                monster3();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                attack_char3();
                attack_text();
                Sleep(1000);
                attack3();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                monster3();
                fight_num_basic2();
                monster3();
                Sleep(3000);
                continue;
            }
            else continue;
        
        }

    }

}
        

void gamestart()
{   
    while (gamestarte==1)
    {
        system("cls");
        PlaySound(NULL, NULL, 0);
        
        PlaySound(TEXT(MUSIC_FILE_PATH3), NULL, SND_FILENAME| SND_ASYNC | SND_LOOP);
        border_line();
        loading_text();
        name_text();
        Sleep(1000);
                
        system("cls");
        PlaySound(NULL, NULL, 0);
        border_line();
        line();
        chapter1();
        monster();
        banana_cat();
        Sleep(2000);
        chapter1_fight();
    }
}