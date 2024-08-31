#include "Movie.h"

Movie::Movie() : nombre(""), a�o(0), duracion(0), pais(""), resena("") {}

Movie::Movie(std::string nombre, int a�o, int duracion, std::string pais, std::string resena)
    : nombre(nombre), a�o(a�o), duracion(duracion), pais(pais), resena(resena) {}

Movie::~Movie() {}

std::string Movie::getNombre() const {
    return nombre;
}

void Movie::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

int Movie::getA�o() const {
    return a�o;
}

void Movie::setA�o(int a�o) {
    this->a�o = a�o;
}

int Movie::getDuracion() const {
    return duracion;
}

void Movie::setDuracion(int duracion) {
    this->duracion = duracion;
}

std::string Movie::getPais() const {
    return pais;
}

void Movie::setPais(const std::string& pais) {
    this->pais = pais;
}

std::string Movie::getResena() const {
    return resena;
}

void Movie::setResena(const std::string& resena) {
    this->resena = resena;
}
