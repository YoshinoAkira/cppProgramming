//構造体ポインタに対してドットでやる
#include <iostream>
using namespace std;

class test{
	int a;
	public:
	test(){a=334;}
	int get_a(){return a;}
};

int main(){
	test t	;
	test *p;
	p=&t;
	cout << t.get_a()<<endl;
	cout << (*p).get_a() << endl;
	cout << p->get_a() << endl;
//	cout << p.get_a() << endl;
//	cout << t->get_a() << endl;
//	cout << (*p).a << endl;
	cout << (&t)->get_a() << endl;
	cout << (*(&t)).get_a() << endl;
	cout << (&*p)->get_a()<<endl;
	cout << (*&t).get_a()<<endl;
	
	
	return 0;

}
