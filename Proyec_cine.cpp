#include <iostream>
#include <limits>
#include <string>
#include "Movie.h"
#include "Room.h"
#include "Schedule.h"
#include "Reservation.h"
#include "Sale.h"
#include <vector>

void showMenu();
void performMaintenance();
void makeReservation();
void processSale();

// Variables globales para simular una base de datos temporal
Movie currentMovie;
Room currentRoom;
Schedule currentSchedule;
Reservation currentReservation;
Sale currentSale;

int main() {
    int option, secondOption = 0;
    do {
        showMenu();
        std::cin >> option;

        switch (option) {
        case 1:
            std::cout << "seleccione una opcion: \n";
            std::cout << "1. Acerca de: \n";
            std::cout << "2. salir \n";
            std::cin >> secondOption;

            if (secondOption == 1) {
                std::cout << "Estudiante: Jafeth Godinez Matarrita\n";
            }
            else {
                std::cout << "Saliendo...\n";
                exit(0);
            }

            break;
        case 2:
            performMaintenance();
            break;
        case 3:
            makeReservation();
            break;
        case 4:
            processSale();
            break;
        default:
            std::cout << "Opcion invalida. Intentelo de nuevo.\n";
            break;
        }
    } while (option != 5);

    return 0;
}

void showMenu() {
    std::cout << "\n==== Cinema Ticketing System ====\n";
    std::cout << "Seleccione una opcion: \n";
    std::cout << "1. Archivo\n";
    std::cout << "2. Mantenimiento\n";
    std::cout << "3. Reservacion\n";
    std::cout << "4. Venta\n";
}

void performMaintenance() {
    std::string title, country, review, day, startTime, endTime;
    int year, duration, roomNumber, seats;
    float price;

    std::cout << "=== mantenimiento de la pelicula ===\n";
    std::cout << "ingrese el título de la pelicula: ";
    std::cin.ignore();
    std::getline(std::cin, title);

    std::cout << "ingrese el anio: ";
    while (!(std::cin >> year)) {
        std::cin.clear();  // Limpia el estado de error
        std::cin.ignore(10000, '\n'); // Descarta la entrada inválida
        std::cout << "Error: por favor ingrese un valor entero valido.\n";
        std::cout << "Ingrese el anio nuevamente: ";
    }
    std::cout << "Anio ingresado: " << year << std::endl;

    std::cout << "ingrese la duración (minutos): ";
    while (!(std::cin >> duration)) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Error: por favor ingrese un valor entero valido.\n";
        std::cout << "Ingrese la duracion nuevamente: ";
    }
    std::cout << "duracion ingresada: " << duration << std::endl;

    std::cout << "ingrese el pais: ";
    std::cin.ignore();
    std::getline(std::cin, country);

    std::cout << "ingrese la review: ";
    while (!(std::cin >> review)) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Error: por favor ingrese un valor entero valido.\n";
        std::cout << "Ingrese la review de nuevo: ";
    }
    std::cout << "review ingresada: " << review << std::endl;
    currentMovie = Movie(title, year, duration, country, review);

    std::cout << "\n=== Mantenimiento de la sala ===\n";
    std::cout << "ingrese el numero de la sala: ";
    std::cin >> roomNumber;
    while (!(std::cin >> roomNumber)) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Error: por favor ingrese un valor entero valido.\n";
        std::cout << "error, ingrese un valor tipo int (ejemplo, 1, 2, 3...): ";
    }

    std::cout << "ingrese el numero de asientos: ";
    std::cin >> seats;
    while (!(std::cin >> seats)) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Error: por favor ingrese un valor entero valido.\n";
        std::cout << "error, ingrese un valor tipo int (ejemplo, 1, 2, 3...): ";
    }

    std::cout << "ingrese el precio del ticket: ";
    std::cin >> price;
    while (!(std::cin >> price)) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Error: por favor ingrese un valor entero valido.\n";
        std::cout << "error, ingrese un valor tipo int (ejemplo, 1, 2, 3...): ";
    }
    currentRoom = Room(roomNumber, seats, price);

    std::cout << "\n=== mantenimiento del horario ===\n";
    std::cout << "ingrese la fecha (ejemplo, lunes_04_de_Marzo): ";
    std::cin.ignore();
    std::getline(std::cin, day);
    std::cout << "ingrese la hora de inicio (ejemplo, 14:00): ";
    std::getline(std::cin, startTime);
    std::cout << "ingrese la hora de finalizacion (ejemplo, 16:00): ";
    std::getline(std::cin, endTime);

    currentSchedule = Schedule(day, startTime, endTime);
}

void makeReservation() {
    // Verifica si hay una película seleccionada
    if (currentMovie.getTitle().empty()) {
        std::cout << "No hay peliculas disponibles para reserva. Realice el mantenimiento primero.\n";
        return;
    }

    std::cout << "=== Reservación de la pelicula ===\n";
    std::cout << "Pelicula: " << currentMovie.getTitle() << "\n";
    std::cout << "Sala: " << currentRoom.getNumber() << "\n";
    std::cout << "Horario: " << currentSchedule.getDay() << " " << currentSchedule.getStartTime() << "\n";

    // Mostrar asientos disponibles
    currentRoom.displaySeats();

    int row, col;
    std::cout << "Ingrese el numero de fila para reservar (0 - " << currentRoom.getSeatCount() << "): ";
    std::cin >> row;
    std::cout << "Ingrese el numero de columna para reservar (0 - " << currentRoom.getSeatCount() << "): ";
    std::cin >> col;

    std::cout << "Fila ingresada: " << row << ", Columna ingresada: " << col << "\n";
    std::cout << "Verificando limites: SeatCount = " << currentRoom.getSeatCount() << "\n";

    // Verificar si los valores de fila y columna están dentro del rango permitido
    if (row < 0 || row >= currentRoom.getSeatCount() || col < 0 || col >= currentRoom.getSeatCount()) {
        std::cout << "Fila o columna fuera de rango. Por favor ingrese valores válidos.\n";
        return;
    }

    char seatStatus = currentRoom.getSeatStatus(row, col);

    if (seatStatus == 'D') {
        if (currentRoom.reserveSeat(row, col)) {
            std::cout << "Reserva exitosa. Asiento reservado.\n";
        }
        else {
            std::cout << "Error: No se pudo reservar el asiento.\n";
        }
    }
    if (seatStatus == 'R') {
        std::cout << "El asiento ya esta reservado.\n";
        return;
    }
    if (seatStatus == 'S') {
        std::cout << "El asiento ya ha sido vendido.\n";
        return;
    }
    if (seatStatus == '\0') {
        std::cout << "Error: Asiento invalido o fuera de rango.\n";
        return;
    }

    float price = currentRoom.getPrice();
    currentReservation = Reservation(currentMovie, currentRoom, currentSchedule, price);

    std::cout << "Reserva exitosa. Precio total: " << price << "\n";
}

void processSale() {
    int row, col;
    std::cout << "Ingrese la fila del asiento a vender: ";
    std::cin >> row;
    std::cout << "Ingrese la columna del asiento a vender: ";
    std::cin >> col;

    if (currentRoom.sellSeat(row, col)) {
        std::cout << "Venta exitosa. Precio: " << currentRoom.getPrice() << "\n";
    }
    else {
        std::cout << "El asiento no esta reservado o no es válido.\n";
    }
}
