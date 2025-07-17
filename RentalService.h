#ifndef RENTALSERVICE_H
#define RENTALSERVICE_H
#include "Car.h"
#include <vector>

class RentalService {
private:
    std::vector<Car> cars;

public:
    void addCar();
    void displayCars() const;
    void rentCar();
    void returnCar();
};

#endif