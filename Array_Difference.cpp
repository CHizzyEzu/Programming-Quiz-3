// Finding the difference of the minimum and maximum value pairs of the array

#include <iostream>
#include <cstdlib>
#include <limits>
#include <climits>
#include <cmath>
using namespace std;

const int ARRAY_SIZE = 15;
int numbers [ARRAY_SIZE] = {10, 12, 15, 20, 30, 25, 40, 32, 31, 35, 17, 7, 22, 60, 19}; // Array Values


/* Function finds the largest and smallest value
    in the fun array and subtracts the two values */
int Largest_Difference()
{
    int lowest = numbers[0];

    for (int c = 1; c < ARRAY_SIZE; c++)
    {
        if (numbers [c] < lowest)
        {
            lowest = numbers[c];
        }
    }
    
    int highest = numbers[0];

    for (int c = 1; c < ARRAY_SIZE; c++)
    {
        if (numbers[c] > highest)
        {
            highest = numbers[c];
        }

    }

    int Difference = 0;

    return highest - lowest;
}


/* Function finds the values in the array with the smallest value difference
    and subtracts those values */
int Smallest_Difference()
{

    int smallestDifference = INT_MAX;

    for(int c = 0; c < ARRAY_SIZE; c++)
    {
        for (int i = c + 1; i < ARRAY_SIZE; i++)
        {
            int difference = abs(numbers[c] - numbers[i]);
            if (difference < smallestDifference)
            {
                smallestDifference = difference;
            }
        }
    }

    return smallestDifference;
}

// Function outputs functions to terminal
int main() 
{

    cout << "Array maximum value difference: " << Largest_Difference() << endl;
    cout << "Array minimum value difference: " << Smallest_Difference() << endl;

    return 0;
}
