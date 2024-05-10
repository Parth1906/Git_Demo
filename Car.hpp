#include<string>
#include <ostream>

class Car
{
private:
    std::string _carName;
    std::string _carBrand;
    int _fuelCapacity;

public:
    Car() = delete;
    Car(const Car&) = delete;
    Car(Car&&) = delete;
    Car operator=(const Car&) = delete;
    Car operator=(Car&&) = delete;
    ~Car() = default;

    Car(std::string carName, std::string carBrand, int fuelCapacity);

    std::string carName() const { return _carName; }
    std::string carBrand() const { return _carBrand; }
    int fuelCapacity() const { return _fuelCapacity; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
    
};