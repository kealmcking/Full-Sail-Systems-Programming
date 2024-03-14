#include <vector>
#include <iostream>
#include <string>
#include "Program3.h"
#include "Utils.h"
#include "Car.h"

using namespace std;



void main()
{
    Car car[3];

    for(int i = 0; i < 3; i++)
    {
        cout << "Enter Car " << (i + 1) << " Make: ";
        string make;
        getline(cin, make);
        StringToCharArray(make, car[i].Make);
        cin.clear();
        
        cout << "Enter Car " << (i + 1) << " Model :";
        string model;
        getline(cin, model);
        StringToCharArray(model, car[i].Model);
        cin.clear();
        
        cout << "Enter Car " << (i + 1) << " Year: ";
        string year_string;
        getline(cin, year_string);
        car[i].Year = stoi(year_string);
        cin.clear();
        
        cout << "Enter Car " << (i + 1) << " Mileage: ";
        string mileage_string;
        getline(cin, mileage_string);
        car[i].Mileage = stoi(mileage_string);
        cin.clear();
        
        bool canLeaveLoop = false;
        
        while (!canLeaveLoop)
        {
            cout << "Enter Car  " << (i + 1) << " Color: " << "\n";
            cout << "1: Red, 2: Blue " << "\n";
            int colorInput;
            cin >> colorInput;
            cin.clear();
            if (colorInput >= 1 && colorInput <= 2)
            {
                car[i].color = (EnumColorDefinition)colorInput;
                cin.clear();
                canLeaveLoop = true;
            }
            
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
       printCar(car[i], i);
        Car* pointer = &car[i];
        printCarPointer(pointer, i);
    }
}


