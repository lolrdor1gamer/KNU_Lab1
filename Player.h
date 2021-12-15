#pragma once
#include <tuple>
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
	std::tuple<Suit, Cards> m_FirstCard;
	std::tuple<Suit, Cards> m_SecondCard;
	float m_Chips;

	Player(std::tuple<Suit, Cards> FirstCard, std::tuple<Suit, Cards> SecondCard, float Chips) : m_FirstCard(FirstCard), m_SecondCard(SecondCard), m_Chips(Chips)
	{

	}
};

