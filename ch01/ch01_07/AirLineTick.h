#pragma once
#include <optional>
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

    std::optional<int> getFrequentFlyerNumber() const;
    void setFrequentFlyerNumber(int number);

private:
    std::string m_passengerName;
    int m_numberOfMiles;
    bool m_hasEliteSuperRewardsStatus;
    std::optional<int> m_FrequentFlyerNumber;
};
