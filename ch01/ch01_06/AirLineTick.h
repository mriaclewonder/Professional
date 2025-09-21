#pragma once
#include <string>

class AirlineTicket {
public:
    double calculatePriceInDollars() const;
    std::string const &getPassengerName() const;
    void setPassengerName(std::string const &name);
    int getNumberOfMiles() const;
    void setNumberOfMiles(int miles);
    bool hasEliteSuperRewardsStatus() const;
    void setHasEliteSuperRewardsStatus(bool status);

private:
    std::string m_passengerName;
    int m_numberOfMiles;
    bool m_hasEliteSuperRewardsStatus;
};
