#include<iostream>
#include <cstdio>
using namespace std;
class Integer {
	int value;public:
	int operator + (Integer obj) {
		return this->value + obj.value;	}
	Integer(int value) { this->value = value; }
};
int main(){
	Integer obj1(10) , obj2(100);
	cout << obj1 + obj2;

	printf ("a\n");
	return 0;
}

