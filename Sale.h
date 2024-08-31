#pragma once

#include "Reserve.h"

class Sale {
private:
    Reserve reserve;
    std::string cedulaCliente;
    std::string numeroTarjeta;

public:
    Sale();
    Sale(Reserve reserve, std::string cedulaCliente, std::string numeroTarjeta);
    ~Sale();

    Reserve getReserve() const;
    void setReserve(const Reserve& reserve);

    std::string getCedulaCliente() const;
    void setCedulaCliente(const std::string& cedulaCliente);

    std::string getNumeroTarjeta() const;
    void setNumeroTarjeta(const std::string& numeroTarjeta);
};
