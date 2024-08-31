#pragma once

#include "Movie.h"
#include "Hall.h"
#include "Schedule.h"

class Reserve {
private:
    Movie movie;
    Hall hall;
    Schedule schedule;
    int butacaFila;
    int butacaColumna;
    int consecutivo;
    std::string estado; // Puede ser "reservado" o "vendido"

public:
    Reserve();
    Reserve(Movie movie, Hall hall, Schedule schedule, int butacaFila, int butacaColumna, int consecutivo);
    ~Reserve();

    Movie getMovie() const;
    void setMovie(const Movie& movie);

    Hall getHall() const;
    void setHall(const Hall& hall);

    Schedule getSchedule() const;
    void setSchedule(const Schedule& schedule);

    int getButacaFila() const;
    void setButacaFila(int fila);

    int getButacaColumna() const;
    void setButacaColumna(int columna);

    int getConsecutivo() const;
    void setConsecutivo(int consecutivo);

    std::string getEstado() const;
    void setEstado(const std::string& estado);
};