#pragma once
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include "resource1.h"
#define N 10
void azgenerate(void); //genreate a-z randomly
void luckygenrate(void); //generate lucky button randomly
int randomnumber(); //generate random numbers for other purposes
void win_god(); //inform user to win by god of luck
void winAZ(); // inform user to win by open all a-z button
void lose(); // inform user that game is over


class cell {   //user defined type for 10x10 button
public:
	System::Char content = '.';
	bool luck = false;
	bool god = false;
	bool shown = false;
};

//Global variables
extern cell table[N][N]; //10x10 array for 10x10 button
extern bool endgame;
extern int rowbutton, colbutton;
extern int azcount; //count for number of set button from AZgenerate
extern int shown_count; //count for number of shown button
