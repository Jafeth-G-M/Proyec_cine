#ifndef MAINTENANCE_H
#define MAINTENANCE_H

#include "Movie.h"
#include "Room.h"
#include "Schedule.h"
#include <vector>
#include <string>

class Maintenance {
private:
    Movie* movies;
    Room* rooms;
    Schedule* schedules;
    int numMovies;
    int numRooms;
    int numSchedules;

public:
    Maintenance();
    ~Maintenance();

    void addMovie(const Movie& movie);
    void removeMovie(int index);
    void displayMovies() const;

    void addRoom(const Room& room);
    void removeRoom(int index);
    void displayRooms() const;

    void addSchedule(const Schedule& schedule);
    void removeSchedule(int index);
    void displaySchedules() const;
};

#endif
