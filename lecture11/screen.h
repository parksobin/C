
#ifndef SCREEN_H
#define SCREEN_H

void writeStringToBuffer(char* screenBuf, const char* string, int x, int y, int bufferWidth, int bufferHeight);
void clearBuffer(char* screenBuf, int width, int height);

void setgamenameToScreenBuffer(char* screenBuf, int width, int height);
void setlineToScreenBuffer(char* screenBuf, int width, int height);

void setTitleToScreenBuffer(char* screenBuf, int width, int height);
void setTitle1ToScreenBuffer(char* screenBuf, int width, int height);
void setTitle2ToScreenBuffer(char* screenBuf, int width, int height);
void setTitle3ToScreenBuffer(char* screenBuf, int width, int height);
void setTitle4ToScreenBuffer(char* screenBuf, int width, int height);
void setTitle5ToScreenBuffer(char* screenBuf, int width, int height);
void setTitle6ToScreenBuffer(char* screenBuf, int width, int height);
void setTitle7ToScreenBuffer(char* screenBuf, int width, int height);
void setTitle8ToScreenBuffer(char* screenBuf, int width, int height);
void setTitle9ToScreenBuffer(char* screenBuf, int width, int height);
void setTitle10ToScreenBuffer(char* screenBuf, int width, int height);

void setstartToScreenBuffer(char* screenBuf, int width, int height);
void sethowplayToScreenBuffer(char* screenBuf, int width, int height);
void setexitToScreenBuffer(char* screenBuf, int width, int height);



void sethowtoplayToScreenBuffer(char* screenBuf, int width, int height);
void sethowtoplay1ToScreenBuffer(char* screenBuf, int width, int height);
void sethowtoplay2ToScreenBuffer(char* screenBuf, int width, int height);
void sethowtoplay3ToScreenBuffer(char* screenBuf, int width, int height);
void sethowtoplay4ToScreenBuffer(char* screenBuf, int width, int height);

void setplayhow1ToScreenBuffer(char* screenBuf, int width, int height);
void setplayhow2ToScreenBuffer(char* screenBuf, int width, int height);
void setplayhow3ToScreenBuffer(char* screenBuf, int width, int height);
void setplayhow4ToScreenBuffer(char* screenBuf, int width, int height);
void setplayhow5ToScreenBuffer(char* screenBuf, int width, int height);

void setreturn1LengthToScreenBuffer(char* screenBuf, int width, int height);
void setreturn2LengthToScreenBuffer(char* screenBuf, int width, int height);

void setexit1ToScreenBuffer(char* screenBuf, int width, int height);
void setexit2ToScreenBuffer(char* screenBuf, int width, int height);
void setexit3ToScreenBuffer(char* screenBuf, int width, int height);
void setexit4ToScreenBuffer(char* screenBuf, int width, int height);
void setexit6ToScreenBuffer(char* screenBuf, int width, int height);
void setexit7ToScreenBuffer(char* screenBuf, int width, int height);
void setexit8ToScreenBuffer(char* screenBuf, int width, int height);

#endif
