#include "Reservation.h"

Reservation::Reservation() : reservationNumber(0) {}

Reservation::Reservation(const Movie& movie, const Room& room, const Schedule& schedule, int reservationNumber)
    : movie(movie), room(room), schedule(schedule), reservationNumber(reservationNumber) {}

Reservation::~Reservation() {}

Movie Reservation::getMovie() const { return movie; }
Room Reservation::getRoom() const { return room; }
Schedule Reservation::getSchedule() const { return schedule; }
int Reservation::getReservationNumber() const { return reservationNumber; }

void Reservation::setMovie(const Movie& movie) { this->movie = movie; }
void Reservation::setRoom(const Room& room) { this->room = room; }
void Reservation::setSchedule(const Schedule& schedule) { this->schedule = schedule; }
void Reservation::setReservationNumber(int reservationNumber) { this->reservationNumber = reservationNumber; }
