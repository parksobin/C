#include "herocat.h"

void weapon()
{
    SetCurrentCursorPos(6, 20);
    printf("₪₪§|(ΞΞΞΞΞΞΞ>");
    SetCurrentCursorPos(27, 20);
    printf("▄︻┻┳══━一・・");
    SetCurrentCursorPos(50, 20);
    printf("──────✱*.｡:");
}
void banana_cat()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    SetCurrentCursorPos(9, 5);
    printf("           人人      ");
    SetCurrentCursorPos(9, 6);
    printf("          /ㅡㅡ\\    ");
    SetCurrentCursorPos(9, 7);
    printf("         \\ ㅇㅇ/");
    SetCurrentCursorPos(9, 8);
    printf("          \\___/");
    SetCurrentCursorPos(9, 9);
    printf("        u/    / U");
    SetCurrentCursorPos(9, 10);
    printf("         \\ __/");
    SetCurrentCursorPos(9, 11);
    printf("         U   U");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void monster()
{
    SetCurrentCursorPos(33, 7);
    printf("     /ﾞﾐヽ､,,___,,／ﾞヽ");
    SetCurrentCursorPos(33, 8);
    printf("    i  /  川  ｀ヽ'>");
    SetCurrentCursorPos(33, 9);
    printf("    / ' ' O  .  O i､");
    SetCurrentCursorPos(33, 10);
    printf("  彡,   ミ(_,人_)彡ミ/");
    SetCurrentCursorPos(33, 10);
    printf(" ∩,  / ヽ､,       ノ");
    SetCurrentCursorPos(33, 11);
    printf("丶ニ|  '\"'\'\'\'\''\''/ ");
    SetCurrentCursorPos(33, 12);
    printf("    ∪⌒∪\"ㅡㅡㅡ ∪");
}

void monster2()
{
    SetCurrentCursorPos(33, 7);
    printf(" ＜￣｀ヽ、　　　　　　　／￣＞");
    SetCurrentCursorPos(33, 8);
    printf(" 　ゝ、　　＼　／⌒ヽ,ノ 　/´");
    SetCurrentCursorPos(33, 9);
    printf(" 　　　ゝ、　`（ ´･ω･)／");
    SetCurrentCursorPos(33, 10);
    printf(" 　　 　　>　 　 　,ノ");
    SetCurrentCursorPos(33, 11);
    printf(" 　　　　　∠_,,,/´””");
}

void monster3()
{
    SetCurrentCursorPos(33, 7);
    printf("         ．/)─―ヘ");
    SetCurrentCursorPos(33, 8);
    printf(" 　　　━／　　　　＼");
    SetCurrentCursorPos(33, 9);
    printf(" 　 ／　　　　●　　●丶");
    SetCurrentCursorPos(33, 10);
    printf(" 　｜　　　　　　　▼　| ");
    SetCurrentCursorPos(33, 11);
    printf(" 　｜　　　　　　　亠ノ ");
    SetCurrentCursorPos(33, 12);
    printf(" 　 U￣U￣￣￣U￣￣U");
}

void happycat()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    SetCurrentCursorPos(28, 7);
    printf("♡(V)  ∧_∧  (V) ");
    SetCurrentCursorPos(28, 8);
    printf("　  ヽ(・ω・)ノ    ♥");
    SetCurrentCursorPos(28, 9);
    printf("　♥   |　  |");
    SetCurrentCursorPos(28, 10);
    printf("    ノ╰----╯ゝ  ♡");
    SetCurrentCursorPos(28, 9);
    printf("　♥   |　  |");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    SetCurrentCursorPos(2, 14);
    printf("｡♥｡‧♡˚ ‧｡♥｡‧˚♡˚ ‧｡♥｡‧˚♡˚ ‧｡♥｡‧˚♡˚ ‧｡♥｡‧˚♡˚ ‧｡♥｡‧♡˚ ‧｡♥｡‧˚♡｡♥｡‧♡˚");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}


void attack_char3()
{
    SetCurrentCursorPos(9, 7);
    printf(" ∧__∧＊ +");
    SetCurrentCursorPos(9, 8);
    printf("(  ･ω･)");
    SetCurrentCursorPos(9, 9);
    printf("(っ──────");
    SetCurrentCursorPos(9, 10);
    printf("/      )");
    SetCurrentCursorPos(9, 11);
    printf("( /￣∪");
    Sleep(500);
    SetCurrentCursorPos(21, 9);
    printf("✱");
    Sleep(500);
    SetCurrentCursorPos(22, 9);
    printf("*.");
    Sleep(500);
    SetCurrentCursorPos(24, 9);
    printf("｡:");
}

void attack_char2()
{
    SetCurrentCursorPos(9, 7);
    printf(" ∧__∧");
    SetCurrentCursorPos(9, 8);
    printf("(  ･ω･)");
    SetCurrentCursorPos(9, 9);
    printf("(っ▄︻▇〓▄︻┻┳═一");
    SetCurrentCursorPos(9, 10);
    printf("/      )");
    SetCurrentCursorPos(9, 11);
    printf("( /￣∪");
    Sleep(500);
    SetCurrentCursorPos(26, 9);
    printf("・");
    Sleep(500);
    SetCurrentCursorPos(28, 9);
    printf("・");
    Sleep(500);
    SetCurrentCursorPos(30, 9);
    printf("・");
}

void attack_char1()
{
    SetCurrentCursorPos(9, 7);
    printf(" ∧__∧");
    SetCurrentCursorPos(9, 8);
    printf("(  ･ω･)");
    SetCurrentCursorPos(9, 9);
    printf("(っ₪₪§|(ΞΞΞΞΞΞΞ>");
    SetCurrentCursorPos(9, 10);
    printf("/      )");
    SetCurrentCursorPos(9, 11);
    printf("( /￣∪");
    Sleep(500);
    SetCurrentCursorPos(26, 9);
    printf("~");
    Sleep(500);
    SetCurrentCursorPos(27, 9);
    printf("~");
    Sleep(500);
    SetCurrentCursorPos(28, 9);
    printf("~");
}

void attack_text()
{   
    Sleep(500);
    SetCurrentCursorPos(19, 5);
    printf("＿人人人人人人＿");
    SetCurrentCursorPos(19, 6);
    printf("＞ 받아랏 - !＜");
    SetCurrentCursorPos(19, 7);
    printf("￣Y^Y^Y^Y^Y^Y￣");
}

void sad_ending()
{
    system("cls");
    border_line();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    SetCurrentCursorPos(22, 5);
    printf("8888888b.  d8b          ");
    SetCurrentCursorPos(22, 6);
    printf("888  \"Y88b Y8P          ");
    SetCurrentCursorPos(22, 7);
    printf("888    888              ");
    SetCurrentCursorPos(22, 8);
    printf("888    888 888  .d88b.  ");
    SetCurrentCursorPos(22, 9);
    printf("888    888 888 d8P  Y8b ");
    SetCurrentCursorPos(22, 10);
    printf("888    888 888 88888888 ");
    SetCurrentCursorPos(22, 11);
    printf("888  .d88P 888 Y8b.     ");
    SetCurrentCursorPos(22, 12);
    printf("8888888P\"  888  \"Y8888  ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    Sleep(1000);
    SetCurrentCursorPos(18, 18);
    printf("곧 타이틀 화면으로 돌아갑니다.");
    Sleep(4000);
}

void happy_ending()
{
    system("cls");
    border_line();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    SetCurrentCursorPos(10, 5);
    printf("888 888 ");
    SetCurrentCursorPos(10, 6);
    printf("888 888 ");
    SetCurrentCursorPos(10, 7);
    printf("888 888 ");
    SetCurrentCursorPos(10, 8);
    printf("8888888888 8888b. 88888b. 88888b.888      888 ");
    SetCurrentCursorPos(10, 9);
    printf("888 888 \"88b 888 \"88b 888  \"88b 888      888 ");
    SetCurrentCursorPos(10, 10);
    printf("888 888 .d888888 888 888 888 888 888     888 ");
    SetCurrentCursorPos(10, 11);
    printf("888 888 888 888 888 d88P 888 d88P Y88b 888 ");
    SetCurrentCursorPos(10, 12);
    printf("888 888 \"Y888888 88888P\" 88888P\"   \"Y888 ");
    SetCurrentCursorPos(10, 13);
    printf("                 888    888       888 ");
    SetCurrentCursorPos(10, 14);
    printf("                 888    888 Y8b d88P ");
    SetCurrentCursorPos(10, 15);
    printf("                 888    888 \"Y88P\" ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    Sleep(1000);
    SetCurrentCursorPos(18, 18);
    printf("곧 타이틀 화면으로 돌아갑니다..");
    Sleep(4000);
}

void ROUND1()
{
    system("cls");
    border_line();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    SetCurrentCursorPos(7, 5);
    printf(" ######    #####    ##  ##  ##  ##   #####       ##");
    SetCurrentCursorPos(7, 6);
    printf(" ### ###  ### ###  ### ###  ### ###  #####      ####");
    SetCurrentCursorPos(7, 7);
    printf(" ###  ##  ### ###  ### ###  ### ###  ##  ###  ## ###");
    SetCurrentCursorPos(7, 8);
    printf(" ### ###  ##   ##  ##  ###  #### ##  ##    ##    ###"); 
    SetCurrentCursorPos(7, 9);
    printf(" ######   ##   ##  ###  ##  ## ####  ###  ##     ###");
    SetCurrentCursorPos(7, 10);
    printf(" ### ###  ### ###  ### ###  ### ###  ### ###     ###");  
    SetCurrentCursorPos(7, 11);             
    printf(" ###  ### #######  #######  ### ###  ######    #######");
    SetCurrentCursorPos(7, 12);
    printf(" ###  ###  #####    #####   ###  ##  #####     #######");
    Sleep(4000);
}

void ROUND2()
{
    system("cls");
    border_line();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    SetCurrentCursorPos(7, 5);
    printf(" ######    #####    ##  ##  ##  ##   #####      #####");
    SetCurrentCursorPos(7, 6);
    printf(" ### ###  ### ###  ### ###  ### ###  #####     #######");
    SetCurrentCursorPos(7, 7);
    printf(" ###  ##  ### ###  ### ###  ### ###  ##  ###  ###  ###");
    SetCurrentCursorPos(7, 8);
    printf(" ### ###  ##   ##  ##  ###  #### ##  ##    ##     ####"); 
    SetCurrentCursorPos(7, 9);
    printf(" ######   ##   ##  ###  ##  ## ####  ###  ##    ####  ");
    SetCurrentCursorPos(7, 10);
    printf(" ### ###  ### ###  ### ###  ### ###  ### ###   ####  ");  
    SetCurrentCursorPos(7, 11);             
    printf(" ###  ### #######  #######  ### ###  ######   #######");
    SetCurrentCursorPos(7, 12);
    printf(" ###  ###  #####    #####   ###  ##  #####    #######");
    Sleep(4000);
}

void FINALROUND()
{
    system("cls");
    border_line();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    SetCurrentCursorPos(13, 3);
    printf("     * * ----  F  I  N  A  L  ---- * *     ");    
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    SetCurrentCursorPos(12, 5);
    printf(" ######    #####    ##  ##  ##  ##   #####   ");
    SetCurrentCursorPos(12, 6);
    printf(" ### ###  ### ###  ### ###  ### ###  #####  ");
    SetCurrentCursorPos(12, 7);
    printf(" ###  ##  ### ###  ### ###  ### ###  ##  ###");
    SetCurrentCursorPos(12, 8);
    printf(" ### ###  ##   ##  ##  ###  #### ##  ##    ##"); 
    SetCurrentCursorPos(12, 9);
    printf(" ######   ##   ##  ###  ##  ## ####  ###  ##");
    SetCurrentCursorPos(12, 10);
    printf(" ### ###  ### ###  ### ###  ### ###  ### ### ");  
    SetCurrentCursorPos(12, 11);             
    printf(" ###  ### #######  #######  ### ###  ######  ");
    SetCurrentCursorPos(12, 12);
    printf(" ###  ###  #####    #####   ###  ##  #####   ");
    Sleep(4000);
}
