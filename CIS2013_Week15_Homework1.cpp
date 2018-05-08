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
	cout << one.get_name() << "'s score is " << one.get_score() << endl;
	cout << two.get_name() << "'s score is " << two.get_score() << endl;
	if(two.get_score()>one.get_score()){
		cout << two.get_name() << " wins...";
	}
	else{
		cout << one.get_name() << " wins!"; 
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
	cout << one.get_name() << "'s score: " << one.get_score() << endl;
	cout << endl << "Dealer is dealt: " << endl;
	for (int j=0; j<2; j++){
		crd=start.draw();
		start.get_score(scr);//Card function changes scr variable
		two.set_score(scr);
		two.play_card(crd);
	}
	cout << two.get_name() << "'s score: " << two.get_score() << endl;
}

