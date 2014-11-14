#include <iostream>
using namespace std;

class POINT{
	public:
		long x,y;
		POINT(){
			cout << "con" << endl;
		}
		void operator ++(int n){
			x++; y++;
			cout << "void" <<endl;
		}
		POINT operator ++(){
			++x; ++y;
			cout << "POINT" << endl;
			return *this;
		}
}obj1,obj2;

int main(){
	obj1.x = 10; obj2.y =5;
	cout << "x = " << obj1.x << "\ty = " << obj1.y << '\n';	
	cout << "x = " << obj2.x << "\ty = " << obj2.y << '\n';
	cout << endl;

    obj2 = obj1;
	cout << "x = " << obj1.x << "\ty = " << obj1.y << '\n';	
	cout << "x = " << obj2.x << "\ty = " << obj2.y << '\n';
	cout << endl;
	obj2++;

	cout << "x = " << obj1.x << "\ty = " << obj1.y << '\n';	
	cout << "x = " << obj2.x << "\ty = " << obj2.y << '\n';

	return 0;
}
