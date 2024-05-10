#include "Car.hpp"

Car::Car(std::string carName, std::string carBrand, int fuelCapacity)
    : _carName(carName), _carBrand(carBrand), _fuelCapacity(fuelCapacity)  {}

std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "_carName: " << rhs._carName
       << " _carBrand: " << rhs._carBrand
       << " _fuelCapacity: " << rhs._fuelCapacity;
    return os;
}


