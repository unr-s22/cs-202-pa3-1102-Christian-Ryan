#include "Money.h"
int Money::getDollars() const
{
    return dollars;
}

int Money::getCents() const
{
    return cents;
}

/*
Money Money::operator+(const Money right)
    {
        Money total(0,0);

        total.dollars = dollars + right.dollars;
        total.dollars = cents + right.cents;
        return total;
    }
    */