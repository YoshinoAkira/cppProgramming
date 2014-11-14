#include <iostream>
using namespace std;
#include <iomanip>
int main(){
	const int arraySize=10;
	int a[arraySize] = {2,4,6,8,10,12,89,68,45,37};
	int hold;

	cout << "元のデータ項目の順序" << endl;
	for(int i=0;i< arraySize;i++){
		cout << setw(4) <<a[i];
	}

	for(int pass = 1; pass < arraySize; pass++){
		for(int i=0;i<arraySize-1;i++){
			if(a[i]>a[i+1]){
				hold=a[i];
				a[i] = a[i+1];
				a[i+1]=hold;
			}
		}
	}

	cout << endl << "昇順にソートしたデータ項目" << endl;
	for(int i=0;i<arraySize; i++){
		cout << setw(4) << a[i];
	}

	cout << endl;

	return 0;
}
