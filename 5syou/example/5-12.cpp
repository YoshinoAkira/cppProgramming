#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

void deal(int [][13],char *[],char *[]);
void shuffle(int [][13]);
void check(int [][13]);

int main(){
	char *face[13]={
		(char *)"エース",(char *)"2",(char *)"3",(char *)"4",(char *)"5",(char *)"6",(char *)"7",(char *)"8",(char *)"9",(char *)"10",(char *)"ジャック",(char *)"クイーン",(char *)"キング"
	};
	char *suit[4]={(char *)"ハート",(char *)"ダイヤ",(char *)"クラブ",(char *)"スペード"};

	int deck[4][13]={0};
//	srand(time(NULL));

	shuffle(deck);
	deal(deck,suit,face);


	cout << endl;
	return 0;
}


void shuffle(int wdeck[][13]){
	int row,col;
	for(int i=1;i<=52;i++){
		row = rand()%4;
		col = rand()%13;
		while(wdeck[row][col]){
			row = rand() % 4;
			col = rand() % 13;
		}
		wdeck[row][col]=i;
	}
}

void deal(int wdeck[][13],char *wsuit[],char *wface[]){
	int card;
	for(int i=1;i<=52;i++){
		for(int row=0;row<4;row++){
			for(int col=0;col<13;col++){
				if(wdeck[row][col]==i){
					cout << setw(30) << setiosflags(ios::left)	<<  wsuit[row] << setw(4) <<" の " ;
					cout << setw(30) << setiosflags(ios::right) << wface[col] << (i%2 ? '\t':'\n');
				}
			}
		}
	}
}

void check(int wdeck[][13]){
	for(int row=0;row<4;row++)	{
		for(int col=0;col<13;col++){
			
		}
	}
}
