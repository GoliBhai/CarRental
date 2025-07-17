#ifndef CAR_H
#define CAR_H
#include <string>

class Car {
private:
    std::string id;
    std::string brand;
    std::string model;
    bool isAvailable;

public:
    Car(std::string id, std::string brand, std::string model);
    void display() const;
    std::string getId() const;
    bool available() const;
    void rent();
    void makeAvailable();
};

#endif