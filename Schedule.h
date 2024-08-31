#pragma once

#include <string>

class Schedule {
private:
    std::string fecha;
    std::string horaInicio;
    std::string horaFin;

public:
    Schedule();
    Schedule(std::string fecha, std::string horaInicio, std::string horaFin);
    ~Schedule();

    std::string getFecha() const;
    void setFecha(const std::string& fecha);

    std::string getHoraInicio() const;
    void setHoraInicio(const std::string& horaInicio);

    std::string getHoraFin() const;
    void setHoraFin(const std::string& horaFin);
};