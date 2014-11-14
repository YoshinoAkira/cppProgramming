#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	for(int i=0;i<100;i++){
		cout << ((rand() % 5 +1)*2 + 1) << endl;
	}

	return 0;
}
