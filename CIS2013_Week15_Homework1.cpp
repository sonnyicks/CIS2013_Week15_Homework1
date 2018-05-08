#include <iostream>
#include <string>
#include "Card.h"
#include "Player.h"

using namespace std;
string dealer="Dealer";
bool running=true;
string crd;
int scr;
bool plr_turn=true;

int main(){
	Card start;
	Player one;
	Player two(dealer);
	
	while(plr_turn){
		plr_turn=one.set_hitting();
		crd=start.draw();
		start.get_score(scr);//Card function changes scr variable
		one.set_score(scr);
		one.play_card(crd);
		one.print_cards();
		//need function to add this score to player variable score
	}
	return 0;
}

//move score from Card to Main to Player
//organize main to follow order of draw
//move recent played card to players array
