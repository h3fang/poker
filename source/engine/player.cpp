#include "player.h"

Player::Player(int id) :
    id(id),
    name("unknown"),
    folded(false),
    allin(false)
{
}

Player::Player(int id, const char *name) :
    id(id),
    name(name),
    folded(false),
    allin(false)
{
}

Player::Player(int id, std::string &name) :
    id(id),
    name(name),
    folded(false),
    allin(false)
{
}

int Player::getMoney() const
{
    return money;
}

void Player::setMoney(int value)
{
    money = value;
}

int Player::getChips() const
{
    return chips;
}

void Player::setChips(int value)
{
    if(value <0) {chips = 0;}
    else {chips = value;}
}

Action Player::getLastAction() const
{
    return lastAction;
}

void Player::setLastAction(const Action &value)
{
    lastAction = value;
}

int Player::getId() const
{
    return id;
}

void Player::setId(int value)
{
    id = value;
}
int Player::getSeat() const
{
    return seat;
}

void Player::setSeat(int value)
{
    seat = value;
}
std::vector<Card> Player::getHoleCards() const
{
    return holeCards;
}

void Player::setHoleCards(const std::vector<Card> &value)
{
    holeCards = value;
}
int Player::getWager() const
{
    return wager;
}

void Player::setWager(int value)
{
    wager = value;
}










