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
		for (int j=0; j<=12; i++){
			deck[count]=suit[i] + value[j];
			count++;
		}
	}
}

string Card::draw(){
	bool a = true;
	srand(time(0));
	while (a){
		int face = rand()%52;
		if (deck[face]!="XX"){
			cout << deck[face] << endl;
			deck[face]="XX";
			score+=weight[face%12];
			}
			a=false;
		}
		a=true;
	}
	


