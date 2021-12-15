#pragma once
#include <tuple>
using namespace std;
enum Cards
{
	k2,
	k3,
	k4,
	k5,
	k6,
	k7,
	k8,
	k9,
	k10,
	kJ,
	kQ,
	kK,
	kA
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
	tuple<Suit, Cards> m_FirstCard;
	tuple<Suit, Cards> m_SecondCard;
	float m_Chips;
	Player()
	{

	}
	Player(tuple<Suit, Cards> FirstCard, tuple<Suit, Cards> SecondCard, float Chips) : m_FirstCard(FirstCard), m_SecondCard(SecondCard), m_Chips(Chips)
	{

	}
};

