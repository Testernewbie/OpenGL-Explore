#include <stdio.h>
#include <tchar.h>
#include <conio.h>
#include <gelog.h>

int _tmain(int argc, char args[])
{
	LOGI("Can't open file ");
	LOGE("D:\\test.txt\n");
	LOGI("end\n");
	LOGDBG("debug log\n");
	std::cin.get();
	return 0;
}