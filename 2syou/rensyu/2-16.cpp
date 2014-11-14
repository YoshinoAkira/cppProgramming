#include <iostream>
using namespace std;

int main(){
	int i;
	int kyori=0,ryou=0;
	int kyorisum=0,ryousum=0;
	while(i!=-1){
		ryousum += ryou;
		cout << "走行距離は？:" ;
		cin >> kyori;
		if(kyori==-1)
			break;
		kyorisum += kyori;
		cout << "給油量は？:";
		cin >> ryou;
		i=ryou;
	}

	cout << "1Lあたりの平均走行キロ数は、"<<static_cast<float>(kyorisum)/ryousum << endl;

	return 0;
}
