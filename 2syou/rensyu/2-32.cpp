#include <iostream>
using namespace std;

void twice(int a);

int main(){
	twice(2);

	return 0;
}

void twice(int a){
	cout << a;
	char ch;
	cin >> ch;
	twice(2*a);
}
