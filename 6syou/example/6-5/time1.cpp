#include <iostream>
#include "time1.h"
using namespace std;
Time::Time(){hour = minute = second =0;}

void Time::setTime(int h,int m,int s){
	hour = (h>=0 && h<24)?h:0;
	minute=(m>=0 && m<60)?m:0;
	second = (s>=0 && s<60)? s:0;
}

void Time::printMilitary(){
	cout << (hour < 10 ? "0":"") << hour << ":";
	cout << (minute < 10 ? "0":"") << minute << ":";
	cout << (second < 10 ?"0":"") << second << endl;
}

void Time::printStandard(){
	cout << ((hour==0||hour==12) ? 12:hour%12) << ":";
	cout << (minute < 10 ? "0":"") << minute << ":";
	cout << (second < 10 ? "0":"") << second ;
	cout << (hour < 12 ? "AM":"PM")<< endl;
}
