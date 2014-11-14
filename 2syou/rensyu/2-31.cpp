#include <iostream>
using namespace std;

int main(){
	int i=10,j=10;
	while(i>=1){
		if(i%2){
			cout << " ";
		}
		j=10;
		while(j>=1){
			cout << "* ";
			j--;
		}
		cout << endl;
		i--;
	}

	return 0;
}
