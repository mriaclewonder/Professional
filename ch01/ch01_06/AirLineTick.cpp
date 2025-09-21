#include "AirLineTick.h"

double AirlineTicket::calculatePriceInDollars() const {
    if (hasEliteSuperRewardsStatus()) {
        return 0;
    }

    return getNumberOfMiles() * 0.1;
}

std::string const &AirlineTicket::getPassengerName() const {
    return m_passengerName;
}

void AirlineTicket::setPassengerName(std::string const &name) {
    this->m_passengerName = name;
}

int AirlineTicket::getNumberOfMiles() const {
    return m_numberOfMiles;
}

void AirlineTicket::setNumberOfMiles(int miles) {
    this->m_numberOfMiles = miles;
}

bool AirlineTicket::hasEliteSuperRewardsStatus() const {
    return m_hasEliteSuperRewardsStatus;
}

void AirlineTicket::setHasEliteSuperRewardsStatus(bool status) {
    this->m_hasEliteSuperRewardsStatus = status;
}
