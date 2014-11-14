#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int col=1;
	cout << "行数を入力:";
	cin >> col;
	int starnum=-1,spacenum=0;
	int med=ceil((float)col/2);
	for(int i=1;i<=col;i++){
		if(i<=med) starnum += 2;
		else starnum -= 2;
		spacenum = col - starnum;

		for(int j=1;j<=col;j++){
			if(spacenum/2 +1 <= j && spacenum/2 + starnum >= j)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
		
	}
	cout << med << endl;
	return 0;
}
