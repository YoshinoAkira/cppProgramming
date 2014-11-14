#include <iostream>
using namespace std;


int main(){
	int a=1,b=2,c=3,d=4,e=5;
	cout << (a++)+b << "\n";
	cout << ++(++a)<<endl;
	cout << a <<endl;
	if(++a ==4) cout << 'a' << endl;
	cout << a;
	return 0;
}
