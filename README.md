#include "setup.h"

setup get_card(char mychar, int myint){
	setup my_setup;
	my_setup.suit=mychar;
	my_setup.val=myint;
	return my_setup;
}

void vect_intail(vector<setup>& myvect){
	int i;

  for(i=2; i<=14; i++){
    myvect.push_back(get_card('H', i));
  }
  for(i=2; i<=14; i++){
    myvect.push_back(get_card('D', i));
  }
  for(i=2; i<=14; i++){
    myvect.push_back(get_card('S', i));
  }
  for(i=2; i<=14; i++){
    myvect.push_back(get_card('C', i));
  }
 }
 
 void shuffle_deck(vector<setup>& myvec ,stack<setup>& mystack)
{
	int i;
std::random_shuffle(myvec.begin(), myvec.end());


	for(i=0; i!=myvec.size(); i++){
	mystack.push(myvec[i]);
	}


}

	switch (cardVal) {

		case 11:
			cardFace = 'J';
		break;

		case 12:
			cardFace = 'Q';
		break;

		case 13:
			cardFace = 'K';
		break;

		case 14:
			cardFace = 'A';
		break;

		default:
			cardFace = '';
		break;

	}
}
