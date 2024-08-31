#pragma once

#include <vector>

class Hall {
private:
    int numero;
    int cantidadButacas;
    float precio;
    std::vector<std::vector<char>> butacas;

public:
    Hall();
    Hall(int numero, int cantidadButacas, float precio);
    ~Hall();

    int getNumero() const;
    void setNumero(int numero);

    int getCantidadButacas() const;
    void setCantidadButacas(int cantidadButacas);

    float getPrecio() const;
    void setPrecio(float precio);

    std::vector<std::vector<char>> getButacas() const;
    void setButaca(int fila, int columna, char estado);
    void mostrarButacas() const;
};
