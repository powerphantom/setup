#ifndef SETUP_H
#define SETUP_H

#include <vector>
#include <algorithm>
#include <stack>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <random>
#include <utility>

using namespace std;

struct setup {

    char suit;
    int val;
};
setup get_card(char mychar, int myint);
void vect_intail(vector<setup>& myvect);
void shuffle_deck(vector<setup>& myvec ,stack<setup>& mystack);
void Deal(stack<setup>& deck, vector<setup>& hand);
void Sequence_Hand(vector<setup>& hand, vector<setup>& stock);
void Ask_squence(vector<setup>& hand, vector<setup>& stock);
void Sequence_Stock(vector<setup>& hand, vector<setup>& stock);
void Draw_Card (stack<setup>& deck,vector<setup>& hand,vector<setup>& discard);
void Discard(vector<setup>& hand, vector<setup>& discard);
void Com_Draw(stack<setup>& deck, vector<setup>& com_hand);
void Com_Discard(vector<setup>& discard, vector<setup>& com_hand);
void Com_Sequence(vector<setup>& stock, vector<setup>& com_hand);
void Output(int cardVal);

#endif
