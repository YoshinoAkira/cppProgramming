//float型をint型の引数に入れ、float型で返した場合、一度intに丸められて計算されたものがfloat型で返されることとなる。

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float roundToInteger(int num){
	return floor(num+0.5);
}

int main(){
	float x;
	cout << "input x:";
	cin >> x;

	cout << "四捨五入すると " 
		<< setiosflags(ios::fixed | ios::showpoint)
		<<roundToInteger(x) << endl;


	return 0;
}
