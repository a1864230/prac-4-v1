#ifndef PARKING_H
#define PARKING_H

#include <ctime>

// Base class Vehicle
class Vehicle {
private:
    std::time_t timeofEntry;
    int ID;
public:
    Vehicle(int id);

    int getID() const;

    // Function to calculate parking duration
    int getParkingDuration() const;
};

// Derived class Car
class Car : public Vehicle {
public:
    Car(int id);

    int getParkingDuration() const override;
};

// Derived class Bus
class Bus : public Vehicle {
public:
    Bus(int id);

    int getParkingDuration() const override;
};

// Derived class Motorbike
class Motorbike : public Vehicle {
public:
    Motorbike(int id);

    int getParkingDuration() const override;
};

#endif // PARKING_H
