#include <iostream>
#include <string>
using namespace std;

class Card{
	private:
		string suit[4] = {" of Hearts", " of Clubs", " of Spades",
		" of Diamonds"};
		string value[13] = {"Ace","2","3","4","5","6","7","8",
		"9","10","Jack","Queen","King"};
		int weight[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 
		10};
		string is_used[52];
		int score=0;
		string deck[52];
	
	public:
		Card();
		
		void initialize();
		
		void draw();
	
	

};

