#pragma once

#include <string>

class Movie {
private:
    std::string nombre;
    int año;
    int duracion;
    std::string pais;
    std::string resena;

public:
    Movie();
    Movie(std::string nombre, int año, int duracion, std::string pais, std::string resena);
    ~Movie();

    std::string getNombre() const;
    void setNombre(const std::string& nombre);

    int getAño() const;
    void setAño(int año);

    int getDuracion() const;
    void setDuracion(int duracion);

    std::string getPais() const;
    void setPais(const std::string& pais);

    std::string getResena() const;
    void setResena(const std::string& resena);
};
