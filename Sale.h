#ifndef SALE_H
#define SALE_H

#include "Reservation.h"
#include <string>

class Sale {
private:
    Reservation reservation;
    std::string clientID;
    std::string clientCard;

public:
    Sale();
    Sale(const Reservation& reservation, const std::string& clientID, const std::string& clientCard);
    ~Sale();

    Reservation getReservation() const;
    std::string getClientID() const;
    std::string getClientCard() const;

    void setReservation(const Reservation& reservation);
    void setClientID(const std::string& clientID);
    void setClientCard(const std::string& clientCard);

    void completeSale();
};

#endif
