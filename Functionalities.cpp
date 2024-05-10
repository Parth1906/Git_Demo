#include<algorithm>
#include<numeric>
#include<iostream>
#include "Functionalities.hpp"

void CreateCars(CarContainerRef carContainer)
{
    carContainer.get().emplace_back(std::make_shared<Car>("ABC", "Honda", 50));
    carContainer.get().emplace_back(std::make_shared<Car>("DEF", "Honda", 50));
}

void DisplayCars(CarContainerRef carContainer)
{
    std::for_each(
        carContainer.get().begin(),
        carContainer.get().end(),
        [](CarPointer& car) {
            std::cout<<*car.get()<<std::endl;
        }
    );
}

void AverageFuelCapacity(CarContainerRef carContainer)
{
    int tot = std::accumulate(
        carContainer.get().begin(),
        carContainer.get().end(),
        0,
        [](int total, CarPointer& car){
            return total + car.get()->fuelCapacity();
        }
    );
    std::cout<<"Average Fuel Capacity: "<< tot/carContainer.get().size();
}
