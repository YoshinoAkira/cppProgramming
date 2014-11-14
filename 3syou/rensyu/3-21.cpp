#include <iostream>
using namespace std;

bool multiple(int ,int);
bool even(int);

int main(){
	int x,y;
	cout << "x:";
	cin >> x;
	cout << "y:";
	cin >> y;

	multiple(x,y);
	
	cout << "d:";
	int d;
	cin >> d;
	even(d);


	return 0;
}

bool multiple(int a,int b){
	if(b%a){
		cout << b << "は" <<  a << "で割りきれません\n";
		return false;
	}else{
		cout << b << "/" << a << "=" << b/a << endl;;
		return true;
	}
}

bool even(int d){
	if(multiple(2,d)){
		cout << d << "は偶数です。\n";
		return true;
	}else{
		cout << d << "は奇数です。n";
		return false;
	}
}
