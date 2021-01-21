#ifndef INTRO_DRAWER_H
#define INTRO_DRAWER_H

#include <iostream>
#include <string>
#include <windows.h> //screen calculations
using namespace std;

class Intro_Drawer
{
public:
	Intro_Drawer();
	~Intro_Drawer();
	
private:
	void intro();
	void printChar(char);
	void drawSpecialLine(string, char);
	
	int screenWidth, space, counter, index;
	string str;
};
#endif