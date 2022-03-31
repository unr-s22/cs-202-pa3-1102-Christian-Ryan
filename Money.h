#include <iostream>
#include <vector>

#ifndef PA3_MONEY_H
#define PA3_MONEY_H

class Money
{
    private:
        int dollars;
        int cents;
    public:
        Money(int _dollars, int _cents) 
        {
            dollars = _dollars;
            cents = _cents;
        }

        int getDollars() const;
        int getCents() const;

    friend std::ostream &operator << (std::ostream &out1, const Money &money)
    {
        out1 << "$" << money.getDollars() << "." << money.getCents();
        return out1;
    }

    //Money operator+(const Money);

    Money operator+(const Money right)
    {
        Money total(0,0);

        total.dollars = dollars + right.dollars;
        total.cents = cents + right.cents;
        return total;
    }
};

#endif