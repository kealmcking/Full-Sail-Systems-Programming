#include <vector>
#include <iostream>

using namespace std;
void main()
{
    // Generates a random seed per created array element
    
    vector<int> numbers;
    
    for (int i = 0; i < 15; i++)
    {
        // Randomizes a number
        int seed = rand() % INT_MAX;
        // Adds random number to 'numbers' array
        numbers.push_back(seed);
        int* ptr = &numbers[i];
        // Print value (numbers[i]) and memory address (ptr)
        cout << "Value: " << numbers[i] << ", Address: " << ptr << "." << "\n";
    }
    
}
