#include <iostream>
#include <string>
#include "Card.h"
#include "Player.h"

using namespace std;
string dealer="Dealer";
bool running=true;


int main(){
	Card start;
	Player one;
	Player two(dealer);
	
	while(running){
		start.draw();
	}
	return 0;
}