#pragma once
#include <tuple>
#include <vector>
using namespace std;
enum Cards
{
	k2=2,
	k3,
	k4,
	k5,
	k6,
	k7,
	k8,
	k9,
	k10,
	kJ=2,
	kQ,
	kK,
	kA=11
};
enum Suit
{
	Hearts,
	Tiles,
	Clovers,
	Pikes
};
class Player
{
public:
	vector<Card> m_Cards;
	float m_Chips;
	int m_count;
	Player()
	{

	}
	Player(Card FirstCard, Card SecondCard, float Chips) : m_Chips(Chips)
	{
		m_Cards.push_back(FirstCard);
		m_Cards.push_back(SecondCard);
		m_count = FirstCard.m_cards;
		m_count += SecondCard.m_cards;
	}
private:

};

struct Card
{
public: 
	Suit m_suit;
	Cards m_cards;
	Card(Suit suit, Cards card) : m_suit(suit), m_cards(card)
	{
	}
};
