#include "saccount.hpp"
#include <sstream>

string Saccount::GetInformation()
{
    stringstream sst;
    sst << Account::GetInformation();
    sst << " - Limit: " << m_limit;
    return sst.str();
}

bool Saccount::Withdraw(float value)
{
    if(m_balance+m_limit >= value)
    {
        m_balance -= value;
        return true;
    }
    else
        return false;
}
