#include <iostream>
using namespace std;
#include <cmath>
// 負の数の丸めが微妙？
void roundToInteger(float);
void roundToTenths(float);
void roundToHundredths(float);
void roundToThousandths(float);

int main(){
	
	float a,b,c,d;
	a=13.5115;
	b=13.4554;
	c=13.4432;
	d=-113.45201;
	roundToInteger(a);
	roundToInteger(b);
	roundToInteger(c);
	roundToInteger(d);
	roundToTenths(a);
	roundToTenths(b);
	roundToTenths(c);
	roundToTenths(d);
	roundToHundredths(a);
	roundToHundredths(b);
	roundToHundredths(c);
	roundToHundredths(d);
	roundToThousandths(a);
	roundToThousandths(b);
	roundToThousandths(c);
	roundToThousandths(d);
		
	return 0;
}

void roundToInteger(float num){
	float y;
	y = floor(num+0.5);
	cout << num << " を整数に丸めると、 " << y << endl;
}

void roundToTenths(float num){
	float y;
	y = floor(num*10+0.5)/10;
	cout << num << " の小数第一位までで丸めると、 " << y << endl;
}

void roundToHundredths(float num){
	float y;
	y = floor(num*100+0.5)/100;
	cout << num << " の小数第二位までで丸めると、 " << y << endl;
}

void roundToThousandths(float num){
	float y;
	y = floor(num*1000+0.5)/1000;
	cout << num << " の小数第三位までで丸めると、 " << y << endl;
}
