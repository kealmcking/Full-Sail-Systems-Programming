#include <vector>
#include "Program2.h"

using namespace std;

void main()
{
    srand((unsigned) time(NULL));
    vector<int> numbers;

    for (int i = 0; i < 15; i++)
    {
        // Randomizes a number
        int seed = rand() % INT_MAX;
        // Adds random number to 'numbers' array
        numbers.push_back(seed);
        int* ptr = &numbers[i];
        // Print value (numbers[i]) and memory address
        PrintParams(numbers[i], ptr);
        
    }
}


