#include <vector>
#include <iostream>
#include <string>
#include "Car.h"

using namespace std;
void StringToCharArray(string _string, char* array)
{
    for (int i = 0; i < _string.length(); i++)
    {
        array[i] = _string[i];
    }
}
void repaintCar(Car* ptrCar, EnumColorDefinition newColor)
{
    ptrCar->color = newColor;
}

void printCar(Car car, int i)
{
    string colorString;
    switch ((int)car.color) {
    case 1:
        colorString = "Red";
        break;
    case 2:
        colorString = "Blue";
        break;
    default:
        cout << "INVALID" << "\n";
        break;
    }

    cout << "Car " << i
    << " - " <<
        to_string(car.Year) <<
            " " << colorString <<
                " " << car.Make <<
                    " " << car.Model <<
                        " with " << to_string(car.Mileage)<<
                            " miles." <<
                                "\n";
}


void printCarPointer(Car* ptrCar, int i)
{
    printCar(ptrCar[i], i);
}
