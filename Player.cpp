#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

Player::Player(){
	set_name();
}

Player::Player(string n){
	set_name(n);
}

string Player::set_name(){
	cout << "Enter your name: ";
	cin >> name;
	return name;
}

string Player::set_name(string p){
	name=p;
	return name;
}

string Player::get_name(){
	return name;
}

int Player::set_score(int a){
	pscore+=a;
	if ((pscore==21)&&(name!="Dealer")){
		is_hitting=false;
		cout << endl << "21, you win!";
		exit(1);
	}
	else if ((pscore>21)&&(name=="Dealer")){
		cout << "Dealer busts, you win!";
		exit(1);
	}
	else if (pscore>21){
		is_hitting=false;
		cout << endl << "Busted, you lose...";
		exit(1);
	}
}

int Player::get_score(){
	return pscore;
}

bool Player::set_hitting(){
	bool valid=false;
	char hs;
	while (!valid){
		cout << "Hit or Stay?: ";
		cin >> hs;
		if ((hs=='s')||(hs=='S')){
			is_hitting=false;
			valid=true;
		}
		else if ((hs!='h')&&(hs!='H')){
			cout << "Invalid entry - choose again" << endl;
		}
		else {
			valid=true;
		}
	}
	return is_hitting;
}

void Player::play_card (string x){
	played_cards[numcards]=x;
	numcards++;
}

void Player::print_cards(){
	cout << endl << name << endl << "Current cards: " << endl;
	for (int i=0; i<numcards; i++){
		cout << played_cards[i] << endl;
	}
	cout << endl << "Current score: " << pscore << endl;
}