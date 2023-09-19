#include <stdio.h>

int main (void) 
{
	int hour, min, sec;
	double time = 3.76;
	
	//hour
	hour = (int)time;
	
	//min
	time -= hour;
	time *= 60.0;
	min = (int)time;
	 
	//sec
	time -= min;
	time *=60;
	sec = (int)time;
	
	printf("%d시 %d분 %d초 입니다.\n", hour, min, sec);
	
	return 0;
}
