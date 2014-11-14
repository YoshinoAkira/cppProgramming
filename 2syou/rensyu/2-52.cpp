#include <iostream>
using namespace std;

int main(){
	int i=1,j=2,k=3,m=2;
	cout << (i==1) << endl; //true
	cout << (j==3) << endl; // false
	cout << (i >= 1 && j < 4) << endl; //true
	cout << (m<=99 && k < m) <<endl; // false
	cout << (j>=i||k==m) << endl; // false
	//cout << (k+m< || 3-j>=k) <<endl; //false????
	cout << !m << endl; //false
	cout << !(j-m) <<endl; //true
	cout << !(k<m) << endl; //true

	return 0;
}
