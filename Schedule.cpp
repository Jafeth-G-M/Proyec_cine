#include "Schedule.h"

Schedule::Schedule() : fecha(""), horaInicio(""), horaFin("") {}

Schedule::Schedule(std::string fecha, std::string horaInicio, std::string horaFin)
    : fecha(fecha), horaInicio(horaInicio), horaFin(horaFin) {}

Schedule::~Schedule() {}

std::string Schedule::getFecha() const {
    return fecha;
}

void Schedule::setFecha(const std::string& fecha) {
    this->fecha = fecha;
}

std::string Schedule::getHoraInicio() const {
    return horaInicio;
}

void Schedule::setHoraInicio(const std::string& horaInicio) {
    this->horaInicio = horaInicio;
}

std::string Schedule::getHoraFin() const {
    return horaFin;
}

void Schedule::setHoraFin(const std::string& horaFin) {
    this->horaFin = horaFin;
}