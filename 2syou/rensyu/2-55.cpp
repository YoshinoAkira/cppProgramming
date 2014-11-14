#include <iostream>
using namespace std;

int main(){
	int count = 0;
	for(int hypotenuse=1;hypotenuse<=500;hypotenuse++){
		for(int side1=1;side1<=500;side1++){
			for(int side2=1;side2<=500;side2++){
				if(hypotenuse*hypotenuse == side1*side1 + side2*side2){
					cout << count << ":"
						 <<	hypotenuse << ' ' << side1 << ' ' << side2 <<endl;
					count++;
				}
			}
		}
	}

	cout << count << "個"  <<endl;

	return 0;
}
