#include <iostream>

using namespace std;

class test{
	int a;
	public:
	test(int num=3){a=num;}
	~test(){cout << "dest:" << a << endl;}
	void seta(int num){a=num;}
};

int main(){
	test t1(5),t2,t3(100);
	t1=t2;
	t2.seta(-5);

	return 0;
}
