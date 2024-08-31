#include "Reserve.h"

Reserve::Reserve() : movie(), hall(), schedule(), butacaFila(0), butacaColumna(0), consecutivo(0), estado("reservado") {}

Reserve::Reserve(Movie movie, Hall hall, Schedule schedule, int butacaFila, int butacaColumna, int consecutivo)
    : movie(movie), hall(hall), schedule(schedule), butacaFila(butacaFila), butacaColumna(butacaColumna), consecutivo(consecutivo), estado("reservado") {}

Reserve::~Reserve() {}

Movie Reserve::getMovie() const {
    return movie;
}

void Reserve::setMovie(const Movie& movie) {
    this->movie = movie;
}

Hall Reserve::getHall() const {
    return hall;
}

void Reserve::setHall(const Hall& hall) {
    this->hall = hall;
}

Schedule Reserve::getSchedule() const {
    return schedule;
}

void Reserve::setSchedule(const Schedule& schedule) {
    this->schedule = schedule;
}

int Reserve::getButacaFila() const {
    return butacaFila;
}

void Reserve::setButacaFila(int fila) {
    this->butacaFila = fila;
}

int Reserve::getButacaColumna() const {
    return butacaColumna;
}

void Reserve::setButacaColumna(int columna) {
    this->butacaColumna = columna;
}

int Reserve::getConsecutivo() const {
    return consecutivo;
}

void Reserve::setConsecutivo(int consecutivo) {
    this->consecutivo = consecutivo;
}

std::string Reserve::getEstado() const {
    return estado;
}

void Reserve::setEstado(const std::string& estado) {
    this->estado = estado;
}