#include <iostream>
using namespace std;

int main(){
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
			if(j<=i)
				cout << "*";
			else 
				cout << " ";
		}
		cout << " ";

		//3
		for(int j=1;j<=10;j++){
			if(j>=i)
				cout << "*";
			else
				cout << " ";
		}
		cout << " ";
		
		//4
		for(int j=1;j<=10;j++){
			if(i+j>=11)
				cout << "*";
			else
				cout << " ";
		}

		cout << endl;
	}




	return 0;
}
