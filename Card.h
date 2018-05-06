#include <iostream>
#include <string>
using namespace std;

class Card{
	private:
		string suit[4] = {"Heart", "Club", "Spade", "Diamond"};
		char value[13] = {'A','2','3','4','5','6','7','8',
		'9','0','J','Q','K'};
		int weight[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 
		10};
		int score=0;
		string deck[52];
	
	public:
		Card();
		
		void initialize();
		
		string draw();
	
	

};

