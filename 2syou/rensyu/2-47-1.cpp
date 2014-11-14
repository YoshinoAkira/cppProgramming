#include <iostream>
using namespace std;

int main(){
	for(int i=1;i<=10;i++){
		//1つ目
		for(int j=1; j<=10; j++){
			if(j<=i)
				cout << "*";
			else
				cout << " ";
		}
		cout << " ";
		//2つ目
		for(int j=10; j>=1; j--){
			if(i<=j)
				cout << "*";
			else
				cout << " ";
		}
		cout << " ";

		//3つ目
		for(int j=1; j<=10; j++){
			if(j<i)
				cout << " ";
			else
				cout << "*";
		}
		cout << " ";
		
		//4つ目
		for(int j=10; j>=1; j--){
			if(i<j)
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}

	return 0;

}
