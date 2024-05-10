#include "Functionalities.hpp"

int main() {
    CarContainer carContainer;

    CreateCars(std::ref(carContainer));
    DisplayCars(std::ref(carContainer));
    AverageFuelCapacity(std::ref(carContainer));

    return 0;
}