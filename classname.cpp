#include "parking.h"
#include <iostream>

// Vehicle constructor
Vehicle::Vehicle(int id) : ID(id) {
    time(&timeofEntry); // Initialize timeofEntry to current time
}

// Get the ID of the vehicle
int Vehicle::getID() const {
    return ID;
}

// Function to calculate parking duration
int Vehicle::getParkingDuration() const {
    std::time_t currentTime;
    time(&currentTime);
    return static_cast<int>(difftime(currentTime, timeofEntry)); // Return duration in seconds
}

// Car constructor
Car::Car(int id) : Vehicle(id) {}

// Override function to calculate parking duration for car
int Car::getParkingDuration() const {
    int duration = Vehicle::getParkingDuration();
    return static_cast<int>(duration * 0.9); // 10% reduction
}

// Bus constructor
Bus::Bus(int id) : Vehicle(id) {}

// Override function to calculate parking duration for bus
int Bus::getParkingDuration() const {
    int duration = Vehicle::getParkingDuration();
    return static_cast<int>(duration * 0.75); // 25% reduction
}

// Motorbike constructor
Motorbike::Motorbike(int id) : Vehicle(id) {}

// Override function to calculate parking duration for motorbike
int Motorbike::getParkingDuration() const {
    int duration = Vehicle::getParkingDuration();
    return static_cast<int>(duration * 0.85); // 15% reduction
}

int main() {
    // Main function remains unchanged from the original provided code.
    // Please refer to the original provided code for the main function.
    return 0;
}