#include "oshinoko.h"
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
extern char screenBuf[];
extern int width;
extern int height;
extern int isGamePlaying ;


void border_line()
{
    clearBuffer(screenBuf, width, height);
    printf("%s\n", screenBuf);
}

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
    SetCurrentCursorPos(21, 5);
    delay_print("당신의 이름을 입력해주세요");
    SetCurrentCursorPos(21, 6);
    delay_print("(영어 / 숫자로만 가능합니다.)");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    SetCurrentCursorPos(18, 12);
    printf("╔═══*.·:·.☽✧    ✦    ✧☾.·:·.*═══╗");
    SetCurrentCursorPos(18, 20);
    printf("╚═══*.·:·.☽✧    ✦    ✧☾.·:·.*═══╝");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    SetCurrentCursorPos(35, 16);
    scanf("%s", playername);
}

void name_text()
{   
    SetCurrentCursorPos(10, 7);
    printf("%s님, 당신은 고양이 세계의 영웅 해피캣입니다.", playername);
    SetCurrentCursorPos(15, 8);
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
    SetCurrentCursorPos(10, 18);
    printf("1");
    SetCurrentCursorPos(32, 18);
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

void weapon()
{
    SetCurrentCursorPos(6, 20);
    printf("₪₪§|(ΞΞΞΞΞΞΞ>");
    SetCurrentCursorPos(28, 20);
    printf("▄︻┻┳══━一");
    SetCurrentCursorPos(45, 20);
    printf("{:̲̅:̲̅{ ̲̅ ̲̅{} ڪ ");
}

void banana_cat()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    SetCurrentCursorPos(5, 7);
    printf("           人人      ");
    SetCurrentCursorPos(5, 8);
    printf("          /ㅡㅡ\\    ");
    SetCurrentCursorPos(5, 9);
    printf("         \\ ㅇㅇ/");
    SetCurrentCursorPos(5, 10);
    printf("          \\___/");
    SetCurrentCursorPos(5, 11);
    printf("        u/    / U");
    SetCurrentCursorPos(5, 12);
    printf("         \\ __/");
    SetCurrentCursorPos(5, 13);
    printf("         U   U");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void monster()
{
    SetCurrentCursorPos(30, 7);
    printf("     /ﾞﾐヽ､,,___,,／ﾞヽ");
    SetCurrentCursorPos(30, 8);
    printf("    i  /  川  ｀ヽ'>");
    SetCurrentCursorPos(30, 9);
    printf("    / ' ' O  .  O i､");
    SetCurrentCursorPos(30, 10);
    printf("  彡,   ミ(_,人_)彡ミ/");
    SetCurrentCursorPos(30, 10);
    printf(" ∩,  / ヽ､,       ノ");
    SetCurrentCursorPos(30, 11);
    printf("丶ニ|  '\"'\'\'\'\''\''/ ");
    SetCurrentCursorPos(30, 12);
    printf("    ∪⌒∪\"ㅡㅡㅡ ∪");
}

void monster2()
{
    SetCurrentCursorPos(30, 7);
    printf(" ＜￣｀ヽ、　　　　　　　／￣＞");
    SetCurrentCursorPos(30, 8);
    printf(" 　ゝ、　　＼　／⌒ヽ,ノ 　/´");
    SetCurrentCursorPos(30, 9);
    printf(" 　　　ゝ、　`（ ´･ω･)／");
    SetCurrentCursorPos(30, 10);
    printf(" 　　 　　>　 　 　,ノ");
    SetCurrentCursorPos(30, 11);
    printf(" 　　　　　∠_,,,/´””");
}

void monster3()
{
    SetCurrentCursorPos(30, 7);
    printf("         ．/)─―ヘ");
    SetCurrentCursorPos(30, 8);
    printf(" 　　　━／　　　　＼");
    SetCurrentCursorPos(30, 9);
    printf(" 　 ／　　　　●　　●丶");
    SetCurrentCursorPos(30, 10);
    printf(" 　｜　　　　　　　▼　| ");
    SetCurrentCursorPos(30, 11);
    printf(" 　｜　　　　　　　亠ノ ");
    SetCurrentCursorPos(30, 11);
    printf(" 　 U￣U￣￣￣U￣￣U");
}

void happycat()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    SetCurrentCursorPos(30, 7);
    printf("♡(V)  ∧_∧  (V) ");
    SetCurrentCursorPos(30, 8);
    printf("　  ヽ(・ω・)ノ    ♥");
    SetCurrentCursorPos(30, 9);
    printf("　♥   |　  |");
    SetCurrentCursorPos(30, 10);
    printf("    ノ╰----╯ゝ  ♡");
    SetCurrentCursorPos(30, 9);
    printf("　♥   |　  |");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    SetCurrentCursorPos(2, 14);
    printf("｡♥｡‧♡˚ ‧｡♥｡‧˚♡˚ ‧｡♥｡‧˚♡˚ ‧｡♥｡‧˚♡˚ ‧｡♥｡‧˚♡˚ ‧｡♥｡‧♡˚ ‧｡♥｡‧˚♡｡♥｡‧♡˚");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

}

void monster_punch1()
{   
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    int randomNumber[20];
    int i;
    for (i = 10; i < 20; i++) {
        randomNumber[i] = rand() % 10 + 10; // 난수값의 범위를 10~60으로 설정
    }
    SetCurrentCursorPos(10, 18);
    printf("몬스터의 공격으로 %d 데미지를 입었어요ㅜㅜ", randomNumber[i - 1]);
    heart = heart - randomNumber[i - 1];
}

void monster_punch2()
{   
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    int randomNumber[20];
    int i;
    for (i = 10; i < 20; i++) {
        randomNumber[i] = rand() % 20 + 10; // 난수값의 범위를 10~60으로 설정
    }
    SetCurrentCursorPos(10, 18);
    printf("몬스터의 공격으로 %d 데미지를 입었어요ㅜㅜ", randomNumber[i - 1]);
    heart = heart - randomNumber[i - 1];
}

void monster_punch3()
{   
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    int randomNumber[20];
    int i;
    for (i = 10; i < 20; i++) {
        randomNumber[i] = rand() % 20 + 10; // 난수값의 범위를 10~60으로 설정
    }
    SetCurrentCursorPos(10, 18);
    printf("몬스터의 공격으로 %d 데미지를 입었어요ㅜㅜ", randomNumber[i - 1]);
    heart = heart - randomNumber[i - 1];
}

void attack()
{   
    int randomNumber[20];
    int i;
    for (i = 10; i < 20; i++) {
        randomNumber[i] = rand() % 51 + 10; // 난수값의 범위를 10~60으로 설정
    }
    SetCurrentCursorPos(15, 18);
    printf("몬스터에게 %d 데미지를 입혔어요!", randomNumber[i - 1]);
    moster_heart = moster_heart - randomNumber[i - 1] ;   
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
            if (moster_heart <=0)
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
            break;
            }
        if (heart <=0)
            {
            system("cls");
            PlaySound(NULL, NULL, 0);
            PlaySound(TEXT(MUSIC_FILE_PATH1), NULL, SND_FILENAME | SND_ASYNC);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            border_line();
            monster_gauge();
            heart_gauge();
            line();
            monster();
            banana_cat();
            SetCurrentCursorPos(10, 17);
            printf("몬스터에게 당해 해피캣과 바나나캣은 죽었습니다..");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);1;
            Sleep(4000);
            ver = 0;
            level =0;
            gamestarte = 0;
            isGamePlaying = 1;
            break;            
            }
        system("cls");
        PlaySound(NULL, NULL, 0);
        PlaySound(TEXT(MUSIC_FILE_PATH1), NULL, SND_FILENAME | SND_ASYNC);
        border_line();
        monster_gauge();
        heart_gauge();
        line();
        normal_botton();
        weapon();
        monster();
        banana_cat();
        SetCurrentCursorPos(28, 15);
        scanf("%d", &fight_num);
        
        if (fight_num ==1)
            {
            system("cls");
            border_line();
            monster_gauge();
            heart_gauge();
            line();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            monster();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            banana_cat();
            attack();
            Sleep(3000);

            system("cls");
            border_line();
            monster_gauge();
            heart_gauge();
            line();
            monster();
            banana_cat();
            monster_punch1();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            Sleep(3000);          
            continue;
            }
        else if (fight_num ==2)
            {
            system("cls");
            border_line();
            monster_gauge();
            heart_gauge();
            line();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            monster();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            banana_cat();
            attack();
            Sleep(3000);
            system("cls");

            border_line();
            monster_gauge();
            heart_gauge();
            line();
            monster();
            banana_cat();
            monster_punch1();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            Sleep(3000);
            continue;
            }
        else if (fight_num ==3)
        {
            system("cls");
            border_line();
            monster_gauge();
            heart_gauge();
            line();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); //red
            monster();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);  //white
            banana_cat();
            attack();
            Sleep(3000);
            system("cls");

            border_line();
            monster_gauge();
            heart_gauge();
            line();
            monster();
            banana_cat();
            monster_punch1();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
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
        if (moster_heart <=0)
        {
            system("cls");
            PlaySound(NULL, NULL, 0);
            PlaySound(TEXT(MUSIC_FILE_PATH3), NULL, SND_FILENAME | SND_ASYNC);
            border_line();
            monster_gauge();
            heart_gauge();
            line();
            happycat();
            banana_cat();
            SetCurrentCursorPos(15, 17);
            printf("몬스터를 해치우고 바나나캣을 구했어요!");
            level =level +1;
            Sleep(4000);
            break;
        }
        if (heart <=0)
        {
            system("cls");
            PlaySound(NULL, NULL, 0);
            PlaySound(TEXT(MUSIC_FILE_PATH1), NULL, SND_FILENAME | SND_ASYNC);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            border_line();
            monster_gauge();
            heart_gauge();
            line();
            monster2();
            banana_cat();
            SetCurrentCursorPos(10, 17);
            printf("몬스터에게 당해 해피캣과 바나나캣은 죽었습니다..");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            Sleep(4000);
            ver = 0;
            level =0;
            gamestarte = 0;
            isGamePlaying = 1;
            break;            
        }
        system("cls");
        PlaySound(NULL, NULL, 0);
        PlaySound(TEXT(MUSIC_FILE_PATH1), NULL, SND_FILENAME | SND_ASYNC);
        border_line();
        monster_gauge();
        heart_gauge();
        line();
        normal_botton();
        weapon();
        monster2();
        banana_cat();
        SetCurrentCursorPos(28, 15);
        scanf("%d", &fight_num);
        if (fight_num ==1)
            {
            system("cls");
            border_line();
            monster_gauge();
            heart_gauge();
            line();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            monster2();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            banana_cat();
            attack();
            Sleep(3000);

            system("cls");
            border_line();
            monster_gauge();
            heart_gauge();
            line();
            monster2();
            banana_cat();
            monster_punch2();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            Sleep(3000);          
            continue;
            }
        else if (fight_num ==2)
            {
            system("cls");
            border_line();
            monster_gauge();
            heart_gauge();
            line();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            monster2();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            banana_cat();
            attack();
            Sleep(3000);
            system("cls");

            border_line();
            monster_gauge();
            heart_gauge();
            line();
            monster2();
            banana_cat();
            monster_punch2();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            Sleep(3000);
            continue;
            }
        else if (fight_num ==3)
            {
            system("cls");
            border_line();
            monster_gauge();
            heart_gauge();
            line();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); //red
            monster2();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);  //white
            banana_cat();
            attack();
            Sleep(3000);
            system("cls");

            border_line();
            monster_gauge();
            heart_gauge();
            line();
            monster2();
            banana_cat();
            monster_punch2();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
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
            if (moster_heart <=0)
            {
            system("cls");
            PlaySound(NULL, NULL, 0);
            PlaySound(TEXT(MUSIC_FILE_PATH3), NULL, SND_FILENAME | SND_ASYNC);
            border_line();
            monster_gauge();
            heart_gauge();
            line();
            happycat();
            banana_cat();
            SetCurrentCursorPos(10, 17);
            printf("몬스터를 모두 없애고 행복한 캣마을이 되었어요!");
            Sleep(4000);
            }
        if (heart <=0)
            {
            system("cls");
            PlaySound(NULL, NULL, 0);
            PlaySound(TEXT(MUSIC_FILE_PATH1), NULL, SND_FILENAME | SND_ASYNC);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            border_line();
            monster_gauge();
            heart_gauge();
            line();
            monster3();
            banana_cat();
            SetCurrentCursorPos(10, 17);
            printf("몬스터에게 당해 해피캣과 바나나캣은 죽었습니다..");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            Sleep(4000);
            ver = 0;
            level =0;
            gamestarte = 0;
            isGamePlaying = 1;
            break;            
            }
        system("cls");
        PlaySound(NULL, NULL, 0);
        PlaySound(TEXT(MUSIC_FILE_PATH1), NULL, SND_FILENAME | SND_ASYNC);
        border_line();
        monster_gauge();
        heart_gauge();
        line();
        normal_botton();
        weapon();
        monster3();
        banana_cat();
        SetCurrentCursorPos(28, 15);
        scanf("%d", &fight_num);
        if (fight_num ==1)
            {
            system("cls");
            border_line();
            monster_gauge();
            heart_gauge();
            line();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            monster3();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            banana_cat();
            attack();
            Sleep(3000);

            system("cls");
            border_line();
            monster_gauge();
            heart_gauge();
            line();
            monster3();
            banana_cat();
            monster_punch3();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            Sleep(3000);          
            continue;
            }
            else if (fight_num ==2)
            {
            system("cls");
            border_line();
            monster_gauge();
            heart_gauge();
            line();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            monster3();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            banana_cat();
            attack();
            Sleep(3000);
            system("cls");

            border_line();
            monster_gauge();
            heart_gauge();
            line();
            monster3();
            banana_cat();
            monster_punch3();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            Sleep(3000);
            continue;
            }
            else if (fight_num ==3)
            {
            system("cls");
            border_line();
            monster_gauge();
            heart_gauge();
            line();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); //red
            monster3();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);  //white
            banana_cat();
            attack();
            Sleep(3000);
            system("cls");

            border_line();
            monster_gauge();
            heart_gauge();
            line();
            monster3();
            banana_cat();
            monster_punch3();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
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
        Sleep(2000);
                
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

// ╾━╤デ╦︻
// ＝lニニフ
//  ₪₪§|(ΞΞΞΞΞΞΞ>
//  {:̲̅:̲̅{ ̲̅ ̲̅ ̲̅ ̲̅ ̲̅{} ڪ 
//   ▄︻┻┳══━一
 
//  　 　　/ﾞﾐヽ､,,___,,／ﾞヽ
// 　 　　i ノ　　 川　 ｀ヽ'
// 　 　　/　｀　O　 ． O i､
// 　 　彡,　　 ミ(_,人_)彡ミ
// ∩, 　/　ヽ､,　　 　　　ノ
// 丶ニ|　　　 '"''''''''"´　ﾉ
// 　　　∪⌒∪"￣￣￣∪
//

//          /---\\         
//         \\ㅇㅇ /
//        /\\_ //
//        u/   / U
//         ----
//        U   U

// ＜￣｀ヽ、　　　　　　　／￣＞
// 　ゝ、　　＼　／⌒ヽ,ノ 　/´ 
// 　　　ゝ、　`（ ´･ω･)／
// 　　 　　>　 　 　,ノ
// 　　　　　∠_,,,/´””

//         ．/)─―ヘ
// 　　　━／　　　　＼
// 　 ／　　　　●　　●丶
// 　｜　　　　　　　▼　| 
// 　｜　　　　　　　亠ノ 　
// 　 U￣U￣￣￣U￣￣U

//  (V)  ∧_∧  (V) 
//　  ヽ(・ω・)ノ 
//　    |　  |
//    ノ╰----╯ゝ 