#include "Account.h"
#include "Money.h"

Account::Account(int _dollar, int _cents) : Money(_dollar, _cents)
    {
        dollars = _dollar;
        cents = _cents;
    }

void Account::makeDeposit(Money*)
    {
        std::vector<Money> deposits;

    }

void Account::makeWithdrawal(Money*)
    {
        std::vector<Money> withdrawals;
    }