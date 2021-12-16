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
	int m_maxBet;
	int m_minBet;
	int m_PlayerMoney;
	Player m_players[8];
	Player m_dealer;


	Player GeneratePlayers()
	{
		return Player(GenerateCard(), GenerateCard(), m_PlayerMoney);
	}

	Card GenerateCard()
	{
		Suit suit = static_cast<Suit>(rand() % 4+1);
		Cards card = static_cast<Cards>(rand() % 14 + 1);
		return Card(suit, card);
	}

public:
	BlackJack(int amount, int min, int max, int money) : m_maxBet(max), m_minBet(min), m_PlayerMoney(money)
	{
		m_playerAmount = std::clamp(amount, 0, 8)+1;
	}
};

