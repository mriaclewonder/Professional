#include "AirLineTick.h"
#include <iostream>

int main(int argc, char const *argv[]) {
    AirlineTicket airLineTicket;
    airLineTicket.setPassengerName("aaa");
    airLineTicket.setNumberOfMiles(10);
    double const cost = airLineTicket.calculatePriceInDollars();
    std::cout << "cost: " << cost << std::endl;
    return 0;
}
