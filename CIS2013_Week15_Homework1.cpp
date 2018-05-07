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
	
	
	while(b<2){//testing variable only 
		start.draw();
		b++;
	}
	return 0;
}