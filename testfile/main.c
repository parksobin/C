#include <stdio.h>
#include "screen.h"
#include "music.h"
#include <windows.h>
#include <mmsystem.h>
#include <stdlib.h>

#pragma comment(lib, "winmm.lib")

int setExitMessagesToScreenBuffer(char* screenBuf, int width, int height);

int main()
{
    /*  width : 30    height : 10    가로여백 : 2    세로여백 :1 */
    char screenBuf[70 * 24 + 1];
    int width = 68;
    int height = 24;
    int isGamePlaying = 1;

    int input;  // 문자열로 입력받는 대신 정수로 입력받도록 변경

    while (isGamePlaying)
    {   
        Sleep(1000);
        //PlaySound(TEXT(MUSIC_FILE_PATH1), NULL, SND_FILENAME | SND_ASYNC);
        PlaySound(TEXT(MUSIC_FILE_PATH1), 0, SND_FILENAME | SND_ASYNC | SND_LOOP); 
        //PlaySound("ost_shorts.wav", 0, SND_FILENAME | SND_ASYNC);

        system("cls");
        clearBuffer(screenBuf, width, height);
        setgamenameToScreenBuffer(screenBuf, width, height);
        setlineToScreenBuffer(screenBuf, width, height);

        setTitleToScreenBuffer(screenBuf, width, height);
        setTitle1ToScreenBuffer(screenBuf, width, height);
        setTitle2ToScreenBuffer(screenBuf, width, height);
        setTitle3ToScreenBuffer(screenBuf, width, height);
        setTitle4ToScreenBuffer(screenBuf, width, height);
        setTitle5ToScreenBuffer(screenBuf, width, height);

       
        setTitle6ToScreenBuffer(screenBuf, width, height);
        setTitle7ToScreenBuffer(screenBuf, width, height);
        setTitle8ToScreenBuffer(screenBuf, width, height);
        setTitle9ToScreenBuffer(screenBuf, width, height);
        setTitle10ToScreenBuffer(screenBuf, width, height);


        setstartToScreenBuffer(screenBuf, width, height);
        sethowplayToScreenBuffer(screenBuf, width, height);
        setexitToScreenBuffer(screenBuf, width, height);


        printf("%s \n input> ", screenBuf);
        scanf("%d", &input);

        //1누른 후 게임 시작하게 되면 게임 플레이 중 백그라운드 음악 설정하기 3min짜리 반복
        //루프재생 : PlaySound("파일경로", 0, SND_FILENAME | SND_ASYNC | SND_LOOP); 

        if (input == 2)
        {   
            // 음악 중단
             PlaySound(NULL, NULL, 0);
             PlaySound(TEXT(MUSIC_FILE_PATH2), NULL, SND_FILENAME | SND_ASYNC);

            clearBuffer(screenBuf, width, height);
            setgamenameToScreenBuffer(screenBuf, width, height);
            setlineToScreenBuffer(screenBuf, width, height); 
            sethowtoplayToScreenBuffer(screenBuf, width, height);
            sethowtoplay1ToScreenBuffer(screenBuf, width, height);
            sethowtoplay2ToScreenBuffer(screenBuf, width, height);
            sethowtoplay3ToScreenBuffer(screenBuf, width, height);
            sethowtoplay4ToScreenBuffer(screenBuf, width, height);
            setplayhow1ToScreenBuffer(screenBuf, width, height);
            setplayhow2ToScreenBuffer(screenBuf, width, height);
            setplayhow3ToScreenBuffer(screenBuf, width, height);
            setplayhow4ToScreenBuffer(screenBuf, width, height);
            setplayhow5ToScreenBuffer(screenBuf, width, height);
            setreturn1LengthToScreenBuffer(screenBuf, width, height);
            setreturn2LengthToScreenBuffer(screenBuf, width, height);

            printf("%s\ninput> \n", screenBuf);

            while (isGamePlaying)
            {
                scanf("%d", &input);
                if (input == 1)
                {   PlaySound(TEXT(MUSIC_FILE_PATH2), NULL, SND_FILENAME | SND_ASYNC);
                    isGamePlaying = 1;
                    break;  // while 루프 탈출
                }
                else if (input == 2)
                {   
                    PlaySound(TEXT(MUSIC_FILE_PATH2), NULL, SND_FILENAME | SND_ASYNC);
                    clearBuffer(screenBuf, width, height);
                    setgamenameToScreenBuffer(screenBuf, width, height);
                    setlineToScreenBuffer(screenBuf, width, height);
                    sethowtoplayToScreenBuffer(screenBuf, width, height);
                    sethowtoplay1ToScreenBuffer(screenBuf, width, height);
                    sethowtoplay2ToScreenBuffer(screenBuf, width, height);
                    sethowtoplay3ToScreenBuffer(screenBuf, width, height);
                    sethowtoplay4ToScreenBuffer(screenBuf, width, height);
                    setplayhow1ToScreenBuffer(screenBuf, width, height);
                    setplayhow2ToScreenBuffer(screenBuf, width, height);
                    setplayhow3ToScreenBuffer(screenBuf, width, height);
                    setplayhow4ToScreenBuffer(screenBuf, width, height);
                    setplayhow5ToScreenBuffer(screenBuf, width, height);
                    setreturn1LengthToScreenBuffer(screenBuf, width, height);
                    setreturn2LengthToScreenBuffer(screenBuf, width, height);

                    printf("%s\ninput> \n", screenBuf);
                }
                else
                {   PlaySound(TEXT(MUSIC_FILE_PATH2), NULL, SND_FILENAME | SND_ASYNC);
                    clearBuffer(screenBuf, width, height);
                    setgamenameToScreenBuffer(screenBuf, width, height);
                    setlineToScreenBuffer(screenBuf, width, height);  
                    sethowtoplayToScreenBuffer(screenBuf, width, height);
                    sethowtoplay1ToScreenBuffer(screenBuf, width, height);
                    sethowtoplay2ToScreenBuffer(screenBuf, width, height);
                    sethowtoplay3ToScreenBuffer(screenBuf, width, height);
                    sethowtoplay4ToScreenBuffer(screenBuf, width, height);
                    setplayhow1ToScreenBuffer(screenBuf, width, height);
                    setplayhow2ToScreenBuffer(screenBuf, width, height);
                    setplayhow3ToScreenBuffer(screenBuf, width, height);
                    setplayhow4ToScreenBuffer(screenBuf, width, height);
                    setplayhow5ToScreenBuffer(screenBuf, width, height);
                    setreturn1LengthToScreenBuffer(screenBuf, width, height);
                    setreturn2LengthToScreenBuffer(screenBuf, width, height);

                    printf("%s\ninput> \n", screenBuf);
                }
            }
        }
        else if (input == 3)
        {   
            PlaySound(TEXT(MUSIC_FILE_PATH2), NULL, SND_FILENAME | SND_ASYNC);
            clearBuffer(screenBuf, width, height);
            int result = setExitMessagesToScreenBuffer(screenBuf, width, height);

            printf("%s\ninput> \n", screenBuf);

            while (isGamePlaying)
            {
                scanf("%d", &input);
                if(input == 2)
                {
                    PlaySound(TEXT(MUSIC_FILE_PATH2), NULL, SND_FILENAME | SND_ASYNC);
                   isGamePlaying = 1;
                    break; 
                }

                 else if(input == 1)
                     {
                     isGamePlaying = 0;
                     
                     }

                else{
                    PlaySound(TEXT(MUSIC_FILE_PATH2), NULL, SND_FILENAME | SND_ASYNC);
                    setexit1ToScreenBuffer(screenBuf, width, height);
                    setexit2ToScreenBuffer(screenBuf, width, height);
                    setexit3ToScreenBuffer(screenBuf, width, height);
                    setexit4ToScreenBuffer(screenBuf, width, height);
                    setexit6ToScreenBuffer(screenBuf, width, height);
                    setexit7ToScreenBuffer(screenBuf, width, height);
                    setexit8ToScreenBuffer(screenBuf, width, height);
                    setgamenameToScreenBuffer(screenBuf, width, height);
                     setlineToScreenBuffer(screenBuf, width, height); 
                     printf("%s\ninput> \n", screenBuf);
                    
                }
            }
        }
    }

    return 0;
}
