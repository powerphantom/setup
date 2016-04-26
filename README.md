#include "setup.h"
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

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
