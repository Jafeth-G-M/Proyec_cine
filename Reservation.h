#ifndef RESERVATION_H
#define RESERVATION_H

#include "Movie.h"
#include "Room.h"
#include "Schedule.h"

class Reservation {
private:
    Movie movie;
    Room room;
    Schedule schedule;
    int reservationNumber;

public:
    Reservation();
    Reservation(const Movie& movie, const Room& room, const Schedule& schedule, int reservationNumber);
    ~Reservation();

    Movie getMovie() const;
    Room getRoom() const;
    Schedule getSchedule() const;
    int getReservationNumber() const;

    void setMovie(const Movie& movie);
    void setRoom(const Room& room);
    void setSchedule(const Schedule& schedule);
    void setReservationNumber(int reservationNumber);
};

#endif
