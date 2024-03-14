#pragma once
#include <vector>

using namespace std;
enum EnumColorDefinition { Red, Blue };
struct Car
{
    char Make[32];
    char Model[32];
    int Year;
    int Mileage;
    EnumColorDefinition color;
};
