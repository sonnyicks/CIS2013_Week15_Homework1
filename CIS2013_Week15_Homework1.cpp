#include <iostream>
#include <string>
#include "Card.h"
#include "Player.h"

using namespace std;
string dealer="Dealer";
bool running=true;
string crd;
int scr;

int main(){
	Card start;
	Player one;
	Player two(dealer);
	int b=0;//testing only
	
	
	while(b<1){//testing variable only 
		start.draw();
		start.get_score(scr);//Card function changes scr variable
		one.set_score(scr);
		// cout << one.get_score() << endl;
		one.print_cards();
		//need function to add this score to player variable score
		b++;
	}
	return 0;
}

//move score from Card to Main to Player
//organize main to follow order of draw
//move recent played card to players array
