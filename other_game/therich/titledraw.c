#include "therich.h"

void border_line() //75*30
{  
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //15: 하얀색
    SetCurrentCursorPos(0, 0);
    printf("╔═══════════════════════*.·:·.☽✧    ✦    ✧☾.·:·.*═══════════════════════╗");
    SetCurrentCursorPos(0, 30);
    printf("╚═══════════════════════*.·:·.☽✧    ✦    ✧☾.·:·.*═══════════════════════╝");
}

void gamemenu()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //15: 하얀색
    SetCurrentCursorPos(27, 23);
    printf("   1 게임 시작   ");    
    SetCurrentCursorPos(27, 25);
    printf("   2 게임 방법   ");
    SetCurrentCursorPos(27, 27);
    printf("   3 게임 종료   ");
}

void playhow()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //15: 하얀색
    SetCurrentCursorPos(33, 5);
    printf("게 임 방 법");
    SetCurrentCursorPos(20, 10);
    printf("전재산이 5천원 밖에 없는 당신은 비트코인을 하게 됩니다.");
    SetCurrentCursorPos(20, 11);
    printf("시세를 확인 하여 코인을 사거나 팔아 돈을 버세요.");
    SetCurrentCursorPos(20, 12);
    printf("코인의 시세는 꼭 어딘가를 들렸다가 다시와야 바뀝니다.");
    SetCurrentCursorPos(20, 13);
    printf("당신의 지갑과 코인이 0에 도달했을 경우 당신은 굶어죽습니다.");
    SetCurrentCursorPos(20, 14);
    printf("또한 사회에 전재산을 기부하여 엔딩을 볼 수 있씁니다.");
    SetCurrentCursorPos(28, 19);
    printf("게임 메뉴로 돌아가시겠습니까 ?");
    SetCurrentCursorPos(30, 20);
    printf("1  YES   |   2  NO");
}

void realexit()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //15: 하얀색
    SetCurrentCursorPos(25, 12);
    printf("정말로 게임을 종료 하시겠습니까?");
    SetCurrentCursorPos(25, 13);
    printf("종료시 게임의 데이터는 저장되지 않습니다.");

    SetCurrentCursorPos(28, 19);
    printf("정말 게임을 종료하시겠습니까 ?");
    SetCurrentCursorPos(30, 20);
    printf("1  YES   |   2  NO");
}


void otaku() 
{  
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //15: 하얀색
    SetCurrentCursorPos(18, 8);
    printf(" ￣￣￣￣￣ヽ___ノ￣￣￣￣￣￣￣￣￣");
    SetCurrentCursorPos(18, 9);
    printf("         Ｏ");
    SetCurrentCursorPos(18, 10);
    printf("          o");
    SetCurrentCursorPos(18, 11);
    printf("         ,. ─冖'    ⌒'─､");
    SetCurrentCursorPos(18, 12);
    printf("        ノ         ＼");
    SetCurrentCursorPos(18, 13);
    printf("        / ,r‐へへく⌒'￢､  ヽ");
    SetCurrentCursorPos(18, 14);
    printf("       {ノ へ._、 ,,／~`  〉 ｝");
    SetCurrentCursorPos(18, 15);
    printf("      ／プ￣￣`y'¨Y´￣￣ヽ─}j=く");
    SetCurrentCursorPos(18, 16);
    printf("     ノ /レ'>ー{___ｭ`ーー'  ﾘ,ｲ}");
    SetCurrentCursorPos(18, 17);
    printf("    / _勺 ｲ;；∵r===､､∴'∵;  シ ");
    SetCurrentCursorPos(18, 18);
    printf("   ,/ └'ノ ＼  ご`    ノ{ー--､__");
    SetCurrentCursorPos(18, 19);
    printf("/   人＿_/ー┬ー个-､＿＿,,.. ‐´ 〃`ァーｧー＼");
    SetCurrentCursorPos(18, 20);
    printf(" . /  |／ |::::|､      〃 /:::/   ヽ");
    SetCurrentCursorPos(18, 21);
    printf(" /    |  |::::|＼､_________／ /:::/〃    |");
}










void ending_rich() 
{  
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //15: 하얀색
    SetCurrentCursorPos(2, 29);
    printf("░░░░░░▄██████████████▄░░░░░░░");
    SetCurrentCursorPos(2, 29);
    printf("░░░░▄██████████████████▄░░░░░");
    SetCurrentCursorPos(2, 29);
    printf("░░░█▀░░░░░░░░░░░▀▀███████░░░░ #######");
    SetCurrentCursorPos(2, 29);
    printf("░░█▌░░░░░░░░░░░░░░░▀██████░░░ ###  ##             ## ###");
    SetCurrentCursorPos(2, 29);
    printf("░█▌░░░░░░░░░░░░░░░░███████▌░░ ###     ######      ##     ######  ######");
    SetCurrentCursorPos(2, 29);
    printf("░█░░░░░░░░░░░░░░░░░████████░░ ######  ##  ##  ###### ### ##  ## ###  ##");
    SetCurrentCursorPos(2, 29);
    printf("▐▌░░░░░░░░░░░░░░░░░▀██████▌░░ ###     ##  ## ###  ## ### ##  ## ###  ##");
    SetCurrentCursorPos(2, 29);
    printf("░▌▄███▌░░░░▀████▄░░░░▀████▌░░ ###  ## ##  ## ###  ## ### ##  ##  ######");
    SetCurrentCursorPos(2, 29);
    printf("▐▀▀▄█▄░▌░░░▄██▄▄▄▀░░░░████▄▄░ ####### ##  ##  ###### ### ##  ##      ##");
    SetCurrentCursorPos(2, 29);
    printf("▐░▀░░═▐░░░░░░══░░▀░░░░▐▀░▄▀▌▌                                    ##### ");
    SetCurrentCursorPos(2, 29);
    printf("▐░░░░░▌░░░░░░░░░░░░░░░▀░▀░░▌▌");
    SetCurrentCursorPos(2, 29);
    printf("░░░▄▀░░░▀░▌░░░░░░░░░░░░▌█░▌▌");
    SetCurrentCursorPos(2, 29);
    printf("░▌░░▀▀▄▄▀▀▄▌▌░░░░░░░░░░▐░▀▐▐░");
    SetCurrentCursorPos(2, 29);
    printf("░▌░░▌░▄▄▄▄░░░▌░░░░░░░░▐░░▀▐░░");
    SetCurrentCursorPos(2, 29);
    printf("░█░▐▄██████▄░▐░░░░░░░░█▀▄▄▀░░");
    SetCurrentCursorPos(2, 29);
    printf("░▐░▌▌░░░░░░▀▀▄▐░░░░░░█▌░░░░░░");
    SetCurrentCursorPos(2, 29);
    printf("░░█░░▄▀▀▀▀▄░▄═╝▄░░░▄▀░▌░░░░░░");
    SetCurrentCursorPos(2, 29);
    printf("░░░▌▐░░░░░░▌░▀▀░░▄▀░░▐░░░░░░░");
    SetCurrentCursorPos(2, 29);
    printf("░░░▀▄░░░░░░░░░▄▀▀░░░░█░░░░░░░");
    SetCurrentCursorPos(2, 29);
    printf("░░░▄█▄▄▄▄▄▄▄▀▀░░░░░░░▌▌░░░░░░");
    SetCurrentCursorPos(2, 29);
    printf("░░▄▀▌▀▌░░░░░░░░░░░░░▄▀▀▄░░░░░");
    SetCurrentCursorPos(2, 29);
    printf("▄▀░░▌░▀▄░░░░░░░░░░▄▀░░▌░▀▄░░░");
    SetCurrentCursorPos(2, 29);
    printf("░░░░▌█▄▄▀▄░░░░░░▄▀░░░░▌░░░▌▄▄");
    SetCurrentCursorPos(2, 29);
    printf("░░░▄▐██████▄▄░▄▀░░▄▄▄▄▌░░░░▄░");
    SetCurrentCursorPos(2, 29);
    printf("░░▄▌████████▄▄▄███████▌░░░░░▄");
    SetCurrentCursorPos(2, 29);
    printf("░▄▀░██████████████████▌▀▄░░░░");
    SetCurrentCursorPos(2, 29);
    printf("▀░░░█████▀▀░░░▀███████░░░▀▄░░");
    SetCurrentCursorPos(2, 29);
    printf("░░░░▐█▀░░░▐░░░░░▀████▌░░░░▀▄░");
    SetCurrentCursorPos(2, 29);
    printf("░░░░░░▌░░░▐░░░░▐░░▀▀█░░░░░░░▀");
}


void ending_gamecord() 
{  
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    SetCurrentCursorPos(29, 10);
    printf("   한푼만..   주십쇼....   ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //15: 하얀색
    SetCurrentCursorPos(27, 12);
    printf(" ￣￣￣￣￣ヽ___ノ￣￣￣￣￣￣￣￣￣");
    SetCurrentCursorPos(29, 13);
    printf(" 　 /)");
    SetCurrentCursorPos(29, 14);
    printf(" 　// ／)");
    SetCurrentCursorPos(29, 15);
    printf(" `/／／　　＿＿");
    SetCurrentCursorPos(29, 16);
    printf(" ｜イ二つ／⌒⌒＼");
    SetCurrentCursorPos(29, 17);
    printf(" ｜ 二⊃ (●)　(●) ＼");
    SetCurrentCursorPos(29, 18);
    printf(" /　 ﾉ／⌒(_人_)⌒ 　＼");
    SetCurrentCursorPos(29, 19);
    printf(" ＼_/｜　　|┬|　　 ｜");
    SetCurrentCursorPos(29, 20);
    printf(" 　/　＼　 `ー′　 ／");
    SetCurrentCursorPos(16, 21);
    printf(" ####### ");
    SetCurrentCursorPos(16, 22);
    printf(" ###  ##             ## ###   ");
    SetCurrentCursorPos(16, 23);
    printf(" ###     ######      ##     ######  ######");
    SetCurrentCursorPos(16, 24);
    printf(" ######  ##  ##  ###### ### ##  ## ###  ##");
    SetCurrentCursorPos(16, 25);
    printf(" ###     ##  ## ###  ## ### ##  ## ###  ##");
    SetCurrentCursorPos(16, 26);
    printf(" ###  ## ##  ## ###  ## ### ##  ##  ######");
    SetCurrentCursorPos(16, 27);
    printf(" ####### ##  ##  ###### ### ##  ##      ##");
    SetCurrentCursorPos(16, 28);
    printf("                                    ##### ");
}
