int main() {
    int numCars, numBuses, numMotorbikes;
    std::cout << "Enter the number of cars: ";
    std::cin >> numCars;
    std::cout << "Enter the number of buses: ";
    std::cin >> numBuses;
    std::cout << "Enter the number of motorbikes: ";
    std::cin >> numMotorbikes;




    // Creating and filling an array of pointers to Vehicle objects
    const int totalVehicles = numCars + numBuses + numMotorbikes;
    Vehicle* vehicles[totalVehicles];

    int idCounter = 1; // ID counter for vehicles
    for (int i = 0; i < numCars; ++i) {
        vehicles[i] = new Car(idCounter++);
    }
    for (int i = numCars; i < numCars + numBuses; ++i) {
        vehicles[i] = new Bus(idCounter++);
    }
    for (int i = numCars + numBuses; i < totalVehicles; ++i) {
        vehicles[i] = new Motorbike(idCounter++);
    }



    // Printing parking duration for each vehicle
    for (int i = 0; i < totalVehicles; ++i) {
        std::cout << "Vehicle ID: " << vehicles[i]->getID() << ", Parking Duration: " << vehicles[i]->getParkingDuration() << " seconds" << std::endl;
    }



    // Freeing memory
    for (int i = 0; i < totalVehicles; ++i) {
        delete vehicles[i];
    }

    return 0;
}
