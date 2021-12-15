#pragma once
#include "Player.h"
#include <algorithm>
#include <tuple>
#include <random>
using namespace std;
class BlackJack
{
private:
	int m_playerAmount;
	Player m_players[8];
	Player m_dealer;


	Player GeneratePlayers()
	{
		return Player(GenerateCard(), GenerateCard(), 2000);
	}

	tuple<Suit, Cards> GenerateCard()
	{
		Suit suit = static_cast<Suit>(rand() % 4+1);
		Cards card = static_cast<Cards>(rand() % 14 + 1);
		return make_tuple(suit, card);
	}

public:
	BlackJack(int amount)  
	{
		m_playerAmount = std::clamp(amount, 0, 8)+1;
	}
};

