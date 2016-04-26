#include "setup.h"

vector<Card> myvect
{
  for(int i=2, i<=14, i++){
    myvect.push_back({'H',i});
  }
  for(i=2, i<=14, i++){
    myvect.push_back({'D',i});
  }
  for(i=2, i<=14, i++){
    mmyvect.push_back({'S',i});
  }
  for(i=2, i<=14, i++){
    myvect.push_back({'C',i});
  }
  }
stack<myvect> deck;
random_suffle(deck.begin(), deck.end());


//Card Faces (J, Q, K, A)

void /*ClassName*/: faceCard(int cardVal){
	char cardFace;

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
