#include <iostream>
using namespace std;

bool multiple(int ,int);

int main(){
	int x,y;
	cout << "x:";
	cin >> x;
	cout << "y:";
	cin >> y;

	multiple(x,y);

	return 0;
}

bool multiple(int a,int b){
	if(b%a){
		cout << b << "は" <<  a << "で割りきれません\n";
		return false;
	}else{
		cout << b << "/" << a << "=" << b/a;
		return true;
	}
}
