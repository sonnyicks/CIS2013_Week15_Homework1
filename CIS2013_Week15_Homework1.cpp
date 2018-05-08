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
bool dlr_turn=true;

Card start;
Player one;
Player two(dealer);

int main(){

	void setup();
	
	//inital setup
	setup();
	
	//player turn
	while(plr_turn){
		plr_turn=one.set_hitting();
		if(plr_turn){
			crd=start.draw();
			start.get_score(scr);//Card function changes scr variable
			one.set_score(scr);
			one.play_card(crd);
			one.print_cards();
		}
	}
	//Dealer turn
	while(two.get_score()<18){
		crd=start.draw();
		start.get_score(scr);//Card function changes scr variable
		two.set_score(scr);
		two.play_card(crd);
		two.print_cards();
	}
	return 0;
}

void setup(){
	cout << "You are dealt: " << endl;
	for (int i=0; i<2; i++){
		crd=start.draw();
		start.get_score(scr);//Card function changes scr variable
		one.set_score(scr);
		one.play_card(crd);
	}
	cout << endl;
	cout << "Dealer is dealt: " << endl;
	for (int j=0; j<2; j++){
		crd=start.draw();
		start.get_score(scr);//Card function changes scr variable
		two.set_score(scr);
		two.play_card(crd);
	}
	cout << endl;
}
//move score from Card to Main to Player
//organize main to follow order of draw
//move recent played card to players array
