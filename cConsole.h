
#ifndef _console_header
#define _console_header
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <time.h>

//static bool isMute = false;

#define ColorCode_Back			0
#define ColorCode_DarkBlue		1
#define ColorCode_DarkGreen		2
#define ColorCode_DarkCyan		3
#define ColorCode_DarkRed		4
#define ColorCode_DarkPink		5
#define ColorCode_DarkYellow	6
#define ColorCode_DarkWhite		7
#define ColorCode_Grey			8
#define ColorCode_Blue			9
#define ColorCode_Green			10
#define ColorCode_Cyan			11
#define ColorCode_Red			12
#define ColorCode_Pink			13
#define ColorCode_Yellow		14
#define ColorCode_White			15

#define default_ColorCode		7


#define key_Up		1072
#define key_Down	1080
#define key_Left	1075
#define key_Right	1077
#define key_none	-1




int inputKey();
void clrscr();
void gotoXY(int column, int line);
int whereX();
int whereY();
void TextColor(int color);

void ShowConsoleCursor(bool showFlag);

void FixConsoleWindow();

void DisableMouse();


void drawTitle();
#endif

