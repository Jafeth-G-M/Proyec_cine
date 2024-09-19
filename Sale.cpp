#include "Sale.h"
#include <iostream>

Sale::Sale() {}
Sale::Sale(const Reservation& reservation, const std::string& clientID, const std::string& clientCard)
    : reservation(reservation), clientID(clientID), clientCard(clientCard) {}
Sale::~Sale() {}

Reservation Sale::getReservation() const { return reservation; }
std::string Sale::getClientID() const { return clientID; }
std::string Sale::getClientCard() const { return clientCard; }

void Sale::setReservation(const Reservation& reservation) { this->reservation = reservation; }
void Sale::setClientID(const std::string& clientID) { this->clientID = clientID; }
void Sale::setClientCard(const std::string& clientCard) { this->clientCard = clientCard; }

void Sale::completeSale() {
    std::cout << "Venta realizada.\n";
}
