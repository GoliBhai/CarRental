#include "Car.h"
#include <iostream>

Car::Car(std::string id, std::string brand, std::string model)
    : id(id), brand(brand), model(model), isAvailable(true) {}

void Car::display() const {
    std::cout << "ID: " << id << ", Brand: " << brand << ", Model: " << model
              << ", Status: " << (isAvailable ? "Available" : "Rented") << "\n";
}

std::string Car::getId() const { return id; }
bool Car::available() const { return isAvailable; }
void Car::rent() { isAvailable = false; }
void Car::makeAvailable() { isAvailable = true; }