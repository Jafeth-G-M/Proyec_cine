#include "Room.h"
#include <iostream>

int Room::getNumber() const { return number; }
void Room::setNumber(int number) { this->number = number; }

int Room::getSeatCount() const { return SeatCount; }
void Room::setSeatCount(int SeatCount) {
    if (SeatCount > 0) {
        this->SeatCount = SeatCount;
        initializeSeats();
    }
}

float Room::getPrice() const { return price; }
void Room::setPrice(float price) { this->price = price; }

// Función para limpiar la memoria de los asientos
void Room::cleanSeats() {
    if (seats != nullptr) {
        for (int i = 0; i < SeatCount; ++i) {
            delete[] seats[i];
        }
        seats = nullptr;
    }
}

void Room::initializeSeats() {

    // Inicializar nuevos asientos
    seats = new char* [SeatCount];
    for (int i = 0; i < SeatCount; ++i) {
        seats[i] = new char[SeatCount];
        for (int j = 0; j < SeatCount; ++j) {
            seats[i][j] = 'D'; // 'D' para asientos disponibles
        }
    }
}

bool Room::isSeatValid(int row, int col) const {
    if (row < 0 || row >= SeatCount || col < 0 || col >= SeatCount) {
        std::cout << "Fila o columna fuera de rango. Intente de nuevo.\n";
        return false;
    }
    return true;
}


bool Room::canReserveSeat(int row, int col) const {
    if (!isSeatValid(row, col)) return false;  // Verificar si el asiento está en un rango válido

    char status = getSeatStatus(row, col);
    if (status == 'R') {
        std::cout << "El asiento ya esta reservado.\n";
        return false;
    }
    else if (status == 'S') {
        std::cout << "El asiento ya ha sido vendido.\n";
        return false;
    }
    else if (status != 'D') {
        std::cout << "Asiento invalido.\n";
        return false;
    }
    return true;
}

void Room::displaySeats() const {
    if (seats == nullptr) {
        std::cout << "No hay asientos para mostrar. Inicialice los asientos primero \n";
        return;
    }
    if (SeatCount <= 0) {
        std::cout << "Número de asientos no valido. Asegurese de que sea mayor que 0.\n";
        return;
    }

    std::cout << "Visualizacion de asientos para SeatCount = " << SeatCount << '\n';

    for (int i = 0; i < SeatCount; ++i) {
        for (int j = 0; j < SeatCount; ++j) {
            std::cout << seats[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

bool Room::reserveSeat(int row, int col) {
    if (seats != nullptr && row >= 0 && row < SeatCount && col >= 0 && col < SeatCount && seats[row][col] == 'D') {
        seats[row][col] = 'R'; // 'R' para reservado
        return true;
    }
    return false;
}

bool Room::sellSeat(int row, int col) {
    if (seats != nullptr && row >= 0 && row < SeatCount && col >= 0 && col < SeatCount && seats[row][col] == 'R') {
        seats[row][col] = 'S'; // 'S' para vendido
        return true;
    }
    return false;
}

char Room::getSeatStatus(int row, int col) const {
    if (row >= 0 && row < SeatCount && col >= 0 && col < SeatCount && seats != nullptr) {
        return seats[row][col];  // Retorna 'D', 'R' o 'S'
    }
    return '\0';  // Retorna un valor nulo si la posición es inválida
}


