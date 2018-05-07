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
}

int Player::get_score(){
	return pscore;
}

bool Player::set_hitting(char hs){
	bool valid=false;
	while (!valid){
		cout << "Hit or Stay?: ";
		cin >> hs;
		if ((hs=='s')||(hs=='S')){
			is_hitting=false;
		}
		else if ((hs!='h')&&(hs!='H')){
			cout << "Invalid entry - choose again" << endl;
		}
	}
}

void Player::play_card (string x){
	played_cards[numcards]=x;
	numcards++;
}

void Player::print_cards(){
	cout << name << endl;
	for (int i=0; i<numcards; i++){
		cout << played_cards[i] << endl;
	}
	cout << pscore;
}