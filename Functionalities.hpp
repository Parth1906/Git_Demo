#include<vector>
#include<memory>
#include "Car.hpp"

using CarPointer = std::shared_ptr<Car>;
using CarContainer = std::vector<CarPointer>;
using CarContainerRef = std::reference_wrapper<CarContainer>;

void CreateCars(CarContainerRef carContainer);
void DisplayCars(CarContainerRef carContainer);
void AverageFuelCapacity(CarContainerRef carContainer);