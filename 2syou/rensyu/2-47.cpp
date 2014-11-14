#include <iostream>
using namespace std;

int main(){
	for(int i=1;i<=10;i++){
		for(int j=0;j<i;j++){
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	for(int i=10;i>=1;i--){
		for(int j=0;j<i;j++){
			cout << "*";
		}
		cout <<endl;
	}
	cout << endl;

	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(j<i)
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	for(int i=10;i>=1;i--){
		for(int j=1;j<=10;j++){
			if(j>=i)cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
	

	return 0;

}
