#include <iostream>
using namespace std;


int main(){
	float a,b,c;
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;
	cout << "c:";
	cin >> c;
	float longest=0;
	float other1,other2;
	if(a>=longest){
		longest=a;
		other1=b;
		other1=c;
	}
	if(b>=longest){
		longest=b;
		other1=a;
		other1=c;
	}
	if(c>=longest){
		longest=c;
		other1=a;
		other1=b;
	}

	if(longest>=a+b){
		cout << "三角形ではありません\n";
	}else{
		cout << "三角形です。\n";
	}

	return 0;
}
