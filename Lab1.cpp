#include <iostream>
#include "Circle.h"
#include "BlackJack.h"
using namespace std;

void First();
void BlackJackTask();
BlackJack RegBlackJack(int playersAmount, int minBet, int maxBet);

int main()
{
    First();
}


void First()
{
    float x, y, r;
    cout << "Wrote your x,y and radius" << endl;
    cin >> x >> y >> r;
    Circle c(x, y, r);

    Circle c1(c);
    cout << "Copied x:" << c1.m_x << endl << "Copied y:" << c1.m_y << endl << "Copied r:" << c1.m_r << endl << "Copied Square:" << c1.Square() << endl;
}

BlackJack RegBlackJack(int playersAmount, int minBet, int maxBet, int playerMoney)
{
    return BlackJack(playersAmount, minBet, maxBet, playerMoney);
}

void BlackJackTask()
{
    int playersAmount, minBet, maxBet, money;
    cout << "Wrote your playersAmount, minBet, maxBet and money" << endl;
    cin >> playersAmount >> minBet >> maxBet>> money;
    BlackJack bj = RegBlackJack(playersAmount, minBet, maxBet, money);
}