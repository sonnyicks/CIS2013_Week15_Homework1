#include <iostream>
#include <string>
#include <ctime>
#include "Card.h"

using namespace std;

Card::Card(){
	initialize();
	
}

void Card::initialize(){
	int count=0;
	for (int i=0; i<=3; i++){
		for (int j=0; j<=12; j++){
			deck[count]= value[j] + suit[i];
			count++;
		}
	}
}

string Card::draw(){
	bool ace = false;
	srand(time(0));
	int i=0;
	bool repeat=true;
	while(repeat){
		int face = rand()%52;
	
		if (deck[face]!="XX"){
			cout << deck[face] << endl;
			is_used[drawn]=deck[face];
			deck[face]="XX";
			score+=weight[face%13];
			repeat=false;
			// score=0; //delete after testing
		}
	}
		drawn++;
		repeat=true;
		return is_used[drawn-1];
}

int Card::get_score(int &a){
	a=score;
	score=0;
}
	

	


