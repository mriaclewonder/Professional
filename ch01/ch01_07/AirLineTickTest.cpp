#include "AirLineTick.h"
#include <iostream>

int main(int argc, char const *argv[]) {
    AirlineTicket airLineTicket;
    airLineTicket.setPassengerName("aaa");
    airLineTicket.setNumberOfMiles(10);
    double const cost = airLineTicket.calculatePriceInDollars();
    std::cout << "cost: " << cost << std::endl;

    airLineTicket.setFrequentFlyerNumber(123456);
    std::optional<int> const frequentFlyer =
        airLineTicket.getFrequentFlyerNumber();
    if (frequentFlyer) {
        std::cout << "1: " << frequentFlyer.value() << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }
    return 0;
}
