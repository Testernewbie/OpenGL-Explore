//File: gelog.h
#ifndef __GE_LOG
#define __GE_LOG
#include "geplatform.h"
//Log console
#ifdef __GE_WINDOWS_MODE_LOG
//Colour define list
enum color { DARKBLUE = 1, DARKGREEN, DARKTEAL, DARKRED, DARKPINK, DARKYELLOW, GRAY, DARKGRAY, BLUE, GREEN, TEAL, RED, PINK, YELLOW, WHITE };
//setcolor
struct Setcolor{
	color _c;
	HANDLE _console_handle;
	Setcolor(color c, HANDLE console_handle) :_c(c), _console_handle(0){
		_console_handle = console_handle;
	}
};
#include <iomanip>
std::basic_ostream<char> &operator<<(std::basic_ostream<char> &s, const Setcolor &ref)
{
	SetConsoleTextAttribute(ref._console_handle, ref._c);
	return s;
}
//Output log
#include <iostream>
#define	LOGI(...)	{std::cout<<Setcolor(WHITE, GetStdHandle(STD_OUTPUT_HANDLE))<<__VA_ARGS__;}
#define	LOGE(...)	{std::cout<<Setcolor(TEAL, GetStdHandle(STD_OUTPUT_HANDLE))<<__VA_ARGS__<<Setcolor(WHITE, GetStdHandle(STD_OUTPUT_HANDLE));}
#ifdef __GE_WINDOWS_MODE_LOG_DEBUG
#define	LOGDBG(...)	{std::cout<<Setcolor(DARKYELLOW, GetStdHandle(STD_OUTPUT_HANDLE))<<__VA_ARGS__<<Setcolor(WHITE, GetStdHandle(STD_OUTPUT_HANDLE));}
#endif //!__GE_WINDOWS_MODE_LOG_DEBUG
#endif //!__GE_WINDOWS_MODE_LOG
#endif