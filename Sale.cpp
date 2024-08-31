#include "Sale.h"

Sale::Sale() : reserve(), cedulaCliente(""), numeroTarjeta("") {}

Sale::Sale(Reserve reserve, std::string cedulaCliente, std::string numeroTarjeta)
    : reserve(reserve), cedulaCliente(cedulaCliente), numeroTarjeta(numeroTarjeta) {}

Sale::~Sale() {}

Reserve Sale::getReserve() const {
    return reserve;
}

void Sale::setReserve(const Reserve& reserve) {
    this->reserve = reserve;
}

std::string Sale::getCedulaCliente() const {
    return cedulaCliente;
}

void Sale::setCedulaCliente(const std::string& cedulaCliente) {
    this->cedulaCliente = cedulaCliente;
}

std::string Sale::getNumeroTarjeta() const {
    return numeroTarjeta;
}

void Sale::setNumeroTarjeta(const std::string& numeroTarjeta) {
    this->numeroTarjeta = numeroTarjeta;
}