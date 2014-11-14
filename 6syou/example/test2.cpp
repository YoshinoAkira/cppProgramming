//デフォルト引数について
#include <iostream>

using namespace std;

void test1(int a=3,int b=2,int c=4);
void test2(int a=0,int b=3,int c=10);
void show(int ,int ,int);

int main(){
	test1();
//	test2();

	return 0;
}



void test1(int a,int b, int c){
	show(a,b,c);
}

void test2(int a=3,int b=3,int c=4){
	show(a,b,c);
}


void show(int a,int b,int c){
	cout << "a:" << a <<endl;
	cout << "b:" << b << endl;
	cout << "c:" << c << endl << endl;
}
