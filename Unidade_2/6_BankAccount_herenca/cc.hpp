#ifndef CC_HPP
#define CC_HPP

#include <iostream>
#include "client.hpp"

using namespace std;

class ContaCorrente
{
protected:
    Client *m_client;
    float m_balance;

public:
    ContaCorrente(Client *client, float balance = 0) : m_client(client), m_balance(balance){};

    string GetInfo();

    // methods
    void Deposit(float value);
    void operator+=(float value);

    bool WithDraw(float value);
    bool operator-=(float value);

    bool Transfer(float value, ContaCorrente &conta);
    bool operator>>(ContaCorrente &conta);
};

#endif
