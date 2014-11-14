#include <iostream>
using namespace std;
#include <cstdlib>

int main(){
	for(int i=0;i<100;i++){
		cout << (rand() % 5 +1)*2 << endl;
	}

	return 0;
}
