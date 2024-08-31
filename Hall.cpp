#include "Hall.h"
#include <iostream>

Hall::Hall() : numero(0), cantidadButacas(0), precio(0.0), butacas(0) {}

Hall::Hall(int numero, int cantidadButacas, float precio)
    : numero(numero), cantidadButacas(cantidadButacas), precio(precio), butacas(cantidadButacas, std::vector<char>(cantidadButacas, 'D')) {}

Hall::~Hall() {}

int Hall::getNumero() const {
    return numero;
}

void Hall::setNumero(int numero) {
    this->numero = numero;
}

int Hall::getCantidadButacas() const {
    return cantidadButacas;
}

void Hall::setCantidadButacas(int cantidadButacas) {
    this->cantidadButacas = cantidadButacas;
}

float Hall::getPrecio() const {
    return precio;
}

void Hall::setPrecio(float precio) {
    this->precio = precio;
}

std::vector<std::vector<char>> Hall::getButacas() const {
    return butacas;
}

void Hall::setButaca(int fila, int columna, char estado) {
    if (fila >= 0 && fila < cantidadButacas && columna >= 0 && columna < cantidadButacas) {
        butacas[fila][columna] = estado;
    }
}

void Hall::mostrarButacas() const {
    for (const auto& fila : butacas) {
        for (const auto& butaca : fila) {
            std::cout << butaca << " ";
        }
        std::cout << std::endl;
    }
}