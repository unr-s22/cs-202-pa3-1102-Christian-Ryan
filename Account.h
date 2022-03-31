#include <iostream>
#include <vector>

#include "Money.h"

#ifndef PA3_ACCOUNT_H
#define PA3_ACCOUNT_H

class Account : public Money
{
    private:
        int dollars;
        int cents;
    public:
        Account(int, int);

        void makeDeposit(Money*);
        void makeWithdrawal(Money*);
};

#endif