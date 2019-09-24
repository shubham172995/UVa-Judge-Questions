#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* abs */
#include <cmath>
#include <map>
#include <queue>
#include <functional>
#include <algorithm>
using namespace std;
 
char values[] = "23456789TJQKA";
 
struct isValue
{
    isValue(int x): _x(x){};
    bool operator()(std::pair<int,int> v)
    {
        return v.second == _x;
    }
         
    int _x;
};
class card
{
public:
    char suit;
    int value;
 
};
 
bool compareCards(const card& c1, const card&c2)
{
    return c1.value < c2.value;
}
int isStraightFlush(vector<card> Hand)
{
    int IValue = Hand[0].value;
    char ISuit = Hand[0].suit;
    for (int i=1; i<5; i++) if (Hand[i].value != IValue+i || Hand[i].suit != ISuit) return -1;
    return Hand[4].value;
}
 
int isFourOfAKind(vector<card> Hand, map<int,int> CardSet)
{
     
    map<int,int>::iterator it = find_if(CardSet.begin(), CardSet.end(),isValue(4));
    if (CardSet.size() == 2 && it != CardSet.end()) return it->first;
    return -1;
 
}
 
int isFullHouse(vector<card> Hand, map<int,int>CardSet)
{
         
    map<int,int>::iterator it = find_if(CardSet.begin(), CardSet.end(), isValue(3));
    if (CardSet.size() == 2 && it != CardSet.end()) return it->first;
    return -1;
 
}
 
int isFlush(vector<card> Hand)
{
    char ISuit = Hand[0].suit;
    int value=0;
    for (int i=0; i<5; i++) 
    {
        if (ISuit != Hand[i].suit) return -1;
        value += pow(14.0,i)*Hand[i].value;
    }
 
    return value;
}
 
int isStraight(vector<card> Hand)
{
    int IValue = Hand[0].value;
 
    for (int i=1; i<5; i++) if (Hand[i].value != IValue+i) return -1;
    return Hand[4].value;
}
 
int isThreeOfAKind(vector<card> Hand, map<int,int>CardSet)
{
    map<int,int>::iterator it = find_if(CardSet.begin(), CardSet.end(), isValue(3));
    if (it != CardSet.end()) return it->first;
    return -1;
}
 
int isTwoPairs(vector<card> Hand, map<int,int>CardSet)
{
    map<int,int>::iterator it = find_if(CardSet.begin(), CardSet.end(), isValue(2));
    if (it == CardSet.end()) return -1;
    int P1Value = it->first;
    it++;
    it = find_if(it, CardSet.end(), isValue(2));
    if (it == CardSet.end()) return -1;
    int P2Value = it->first;
    return max(P1Value,P2Value)*14*14 + min(P1Value,P2Value)*14 + find_if(CardSet.begin(), CardSet.end(), isValue(1))->first;
}
 
int isPair(vector<card> Hand, map<int,int>CardSet)
{
    map<int,int>::iterator it = find_if(CardSet.begin(), CardSet.end(), isValue(2));
    if (it == CardSet.end()) return -1;
    int PValue = it->first, p1, p2, p3;
    map<int,int>::iterator it1, it2, it3;
     
    it1 = find_if(CardSet.begin(), CardSet.end(), isValue(1));
    p1 = it1->first;
    it1++;
    it2 = find_if(it1, CardSet.end(), isValue(1));
    p2 = it2->first;
    it2++;
    it3 = find_if(it2, CardSet.end(), isValue(1));
    p3 = it3->first;
    if (it1 == CardSet.end() || it2 == CardSet.end() || it3 == CardSet.end()) return -1;
    return PValue * pow(14.0,3) + p3 * pow(14.0,2) + p2 * pow(14.0,1) + p1; 
}
 
int other(vector<card> Hand)
{
    int value=0;
    for (int i=0; i<5; i++) value += Hand[i].value * pow(14.0,i);
    return value;
}
int main()
{
 
    map<char, int> valueMap;
 
    for (int i=0; i<14; i++) valueMap.insert(make_pair(values[i], i));
    char input[40];
    while(fgets(input,40,stdin) )
    {
        vector< vector<card> > Hands;
        vector<card> h1, h2;
        Hands.push_back(h1);
        Hands.push_back(h2);
 
        for(long long int i=0; i<5; i++)
        {
            card c;
            Hands[0].push_back(c);
            Hands[0][i].value = valueMap[input[3*i]];
            Hands[0][i].suit = input[3*i+1];
 
            Hands[1].push_back(c);
            Hands[1][i].value = valueMap[input[3*5 + 3*i]];
            Hands[1][i].suit = input[3*i+1+3*5 ];
 
        }
        sort(Hands[0].begin(),Hands[0].end(), compareCards);
        sort(Hands[1].begin(),Hands[1].end(), compareCards);
        map<int, int> CardSet[2];
         
 
        int HandRanks[2];
        int HandValues[2];
        for (int i=0; i<10; i++)
        {
            map<int,int>::iterator it;
            it=CardSet[i/5].find(Hands[i/5][i%5].value); 
            if ( it == CardSet[i/5].end()) 
                CardSet[i/5].insert(make_pair(Hands[i/5][i%5].value,1));
            else it->second++;
        }
 
        for (int i=0; i<2; i++)
        {
            HandValues[i] = isStraightFlush(Hands[i]);
            if (HandValues[i] != -1){ HandRanks[i] = 9; continue;}
 
            HandValues[i] = isFourOfAKind(Hands[i],CardSet[i]);
            if (HandValues[i] != -1){ HandRanks[i] = 8; continue;}
 
            HandValues[i] = isFullHouse(Hands[i],CardSet[i]);
            if (HandValues[i] != -1){ HandRanks[i] = 7; continue;}
 
            HandValues[i] = isFlush(Hands[i]);
            if (HandValues[i] != -1){ HandRanks[i] = 6; continue;}
 
            HandValues[i] = isStraight(Hands[i]);
            if (HandValues[i] != -1){ HandRanks[i] = 5; continue;}
 
            HandValues[i] = isThreeOfAKind(Hands[i], CardSet[i]);
            if (HandValues[i] != -1){ HandRanks[i] = 4; continue;}
 
            HandValues[i] = isTwoPairs(Hands[i], CardSet[i]);
            if (HandValues[i] != -1){ HandRanks[i] = 3; continue;}
 
            HandValues[i] = isPair(Hands[i], CardSet[i]);
            if (HandValues[i] != -1){ HandRanks[i] = 2; continue;}
 
            HandValues[i] = other(Hands[i]);
            HandRanks[i] = 1;
 
        }
         
        if (HandRanks[0] > HandRanks[1]) cout << "Black wins.";
        else if (HandRanks[0] < HandRanks[1]) cout << "White wins.";
        else
        {
            if (HandValues[0] > HandValues[1]) cout << "Black wins.";
            else if (HandValues[0] < HandValues[1]) cout << "White wins.";
            else cout << "Tie.";
        }
 
        cout << endl;
    }
 
    return 0;
}