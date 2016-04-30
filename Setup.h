#ifndef SETUP_H
#define SETUP_H

#include <vector>
#include <algorithm>
#include <stack>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <random>

using namespace std;

struct setup {

    char suit;
    int val;
};
setup get_card(char mychar, int myint);
void vect_intail(vector<setup>& myvect);
void shuffle_deck(vector<setup>& myvec ,stack<vector<setup>>& mystack);
void Deal(stack<vector<setup>>& deck, vector<setup>& hand);

#endif

