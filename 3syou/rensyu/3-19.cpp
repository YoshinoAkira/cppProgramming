#include <iostream>
#include <cmath>
using namespace std;

double syahen(double,double);

int main(){
	double s1,s2;
	cout << "s1:";
	cin >> s1;
	cout << "s2:";
	cin >> s2;

	cout << syahen(s1,s2) << endl;
	return 0;
}

double syahen(double side1,double side2){
	return sqrt(pow(side1,2)+pow(side2,2));
}
