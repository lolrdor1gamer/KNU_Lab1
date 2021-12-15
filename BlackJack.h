#pragma once
#include "Player.h"
#include <algorithm>
class BlackJack
{
private:
	int m_playerAmount;
	int *players[];
	void UpdatePLayerList(int amount)
	{
	}
public:
	BlackJack(int amount)  
	{
		m_playerAmount = std::clamp(amount, 0, 8);
	}
};

