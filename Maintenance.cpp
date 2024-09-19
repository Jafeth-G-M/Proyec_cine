#include "Maintenance.h"
#include <iostream>

Maintenance::Maintenance() : numMovies(0), numRooms(0), numSchedules(0) {
    movies = new Movie[100];
    rooms = new Room[10];
    schedules = new Schedule[100];
}

Maintenance::~Maintenance() {
    delete[] movies;
    delete[] rooms;
    delete[] schedules;
}

void Maintenance::addMovie(const Movie& movie) {
    movies[numMovies++] = movie;
}

void Maintenance::removeMovie(int index) {
    if (index >= 0 && index < numMovies) {
        for (int i = index; i < numMovies - 1; ++i) {
            movies[i] = movies[i + 1];
        }
        numMovies--;
    }
}

void Maintenance::displayMovies() const {
    for (int i = 0; i < numMovies; ++i) {
        std::cout << i + 1 << ". " << movies[i].getTitle() << " (" << movies[i].getYear() << ")\n";
    }
}

void Maintenance::addRoom(const Room& room) {
    rooms[numRooms++] = room;
}

void Maintenance::removeRoom(int index) {
    if (index >= 0 && index < numRooms) {
        for (int i = index; i < numRooms - 1; ++i) {
            rooms[i] = rooms[i + 1];
        }
        numRooms--;
    }
}

void Maintenance::displayRooms() const {
    for (int i = 0; i < numRooms; ++i) {
        std::cout << "Sala #" << rooms[i].getNumber() << ", Asientos: " << rooms[i].getSeatCount() << "\n";
    }
}

void Maintenance::addSchedule(const Schedule& schedule) {
    schedules[numSchedules++] = schedule;
}

void Maintenance::removeSchedule(int index) {
    if (index >= 0 && index < numSchedules) {
        for (int i = index; i < numSchedules - 1; ++i) {
            schedules[i] = schedules[i + 1];
        }
        numSchedules--;
    }
}

void Maintenance::displaySchedules() const {
    for (int i = 0; i < numSchedules; ++i) {
        std::cout << "Horario: " << schedules[i].getDay() << " de " << schedules[i].getStartTime() << " para " << schedules[i].getEndTime() << "\n";
    }
}
