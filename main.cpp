#include "Account.h"
#include "Money.h"

int main()
{
    Money* acc1 = new Account(300, 23);

    std::cout << *acc1 << std::endl;

    std::vector<Money*> accountHistory;

    accountHistory.push_back(acc1);

    Money* acc2 = new Account (200, 000);
    Money* acc3 = new Account (300, 24);
    Money* acc4 = new Account (501, 22);

    accountHistory.push_back(acc2);
    accountHistory.push_back(acc3);
    accountHistory.push_back(acc4);

    for(int i = 0; i < 4; i++)
    {
        std::cout << *accountHistory.at(i) << std::endl;
    }

    
    

    return 0;
}