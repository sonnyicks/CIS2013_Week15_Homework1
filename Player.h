#include <iostream>
#include <string>
using namespace std;

class Player{
	private:
		string name;
		string played_cards[52];
		int numcards=0;
		bool is_hitting=true;
		int pscore=0;
		
	public:
		Player();
		
		Player(string);
		
		string set_name();
		
		string set_name(string);
		
		string get_name();
		
		int set_score(int);
		
		int get_score();
		
		bool set_hitting(char);
		
		void play_card(string);
		
		void print_cards();
};