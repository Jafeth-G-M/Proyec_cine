#ifndef ROOM_H
#define ROOM_H

class Room {
private:
    int number;
    int SeatCount;
    float price;
    char** seats;

public:
    void cleanSeats();        // Helper to clean up memory of seats

    Room() : number(0), SeatCount(0), price(0.0f), seats() {}
    Room(int number, int SeatCount, float price)
        : number(number), SeatCount(SeatCount), price(price), seats() {
        if (SeatCount > 0) {
            initializeSeats();  // Inicializar los asientos solo si SeatCount es positivo
        }
    }
    ~Room() {
        cleanSeats();
    }

    int getNumber() const;
    int getSeatCount() const;
    float getPrice() const;
    void setNumber(int number);
    void setSeatCount(int SeatCount);
    void setPrice(float price);

    // Declaración de la función para verificar si un asiento es válido
    bool isSeatValid(int row, int col) const;

    // Declaración de la función para verificar si un asiento se puede reservar
    bool canReserveSeat(int row, int col) const;

    void initializeSeats();
    void displaySeats() const;
    bool reserveSeat(int row, int col);
    bool sellSeat(int row, int col);

    // Método para obtener el estado del asiento
    char getSeatStatus(int row, int col) const;
};

#endif
