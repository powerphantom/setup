#include "setup.h"

stack<int, vector<Card>> myvect;
stack<myvect>deck{
  for(int i=2, i<=14, i++){
    myvect.push({'H',i});
  }
  for(i=2, i<=14, i++){
    myvect.push({'D',i});
  }
  for(i=2, i<=14, i++){
    mmyvect.push({'S',i});
  }
  for(i=2, i<=14, i++){
    myvect.push({'C',i});
  }
  }

random_suffle(myvect.begin(), myvect.end());


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
