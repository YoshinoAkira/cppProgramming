//sample code
//自分のではうまく動かなかったため


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

void shuffle(int [][13]);
void deal(int [][13],char *[],char *[]);


int main(){
	char *suit[4]={"ハート","ダイヤ","クラブ","スペード"};
	char *face[13]={"A","1","2","3","4","5","6","7","8","9","10","J","Q","K"};

	int deck[4][13]={0};

	srand(time(NULL));

	shuffle(deck);
	deal(deck,face,suit);


	return 0;

}


void shuffle(int wDeck[][13]){
	int row,col;
	for(int card=1;card<=52;card++){
		row = rand()%4;
		col = rand()%13;
	}

	while(wDeck[row][col]!=0){
		row = rand()%4;
		col = rand()%13;
	}
	wDeck[row][col]=card;
			
}

