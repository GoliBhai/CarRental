#include "RentalService.h"
#include "utils.h"
#include <iostream>

void RentalService::addCar() {
    std::string id, brand, model;
    std::cout << "Enter Car ID: ";
    std::cin >> id;
    std::cout << "Enter Brand: ";
    std::cin >> brand;
    std::cout << "Enter Model: ";
    std::cin >> model;
    cars.emplace_back(id, brand, model);
    std::cout << "Car added successfully!\n";
    pause();
}

void RentalService::displayCars() const {
    if (cars.empty()) {
        std::cout << "No cars available.\n";
    } else {
        for (const auto& car : cars) {
            car.display();
        }
    }
    pause();
}

void RentalService::rentCar() {
    std::string id;
    std::cout << "Enter Car ID to rent: ";
    std::cin >> id;
    for (auto& car : cars) {
        if (car.getId() == id && car.available()) {
            car.rent();
            std::cout << "Car rented successfully!\n";
            pause();
            return;
        }
    }
    std::cout << "Car not found or already rented.\n";
    pause();
}

void RentalService::returnCar() {
    std::string id;
    std::cout << "Enter Car ID to return: ";
    std::cin >> id;
    for (auto& car : cars) {
        if (car.getId() == id && !car.available()) {
            car.makeAvailable();
            std::cout << "Car returned successfully!\n";
            pause();
            return;
        }
    }
    std::cout << "Car not found or not rented.\n";
    pause();
}