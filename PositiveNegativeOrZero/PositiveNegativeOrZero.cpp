/*
Positive, Negative, or Zero
Pawelski
3/27/2023
C++
*/

#include <iostream>

int main()
{
    int number;
    std::cout << "Please enter a number >> ";
    std::cin >> number;
    if (number < 0)
    {
        std::cout << number << " is negative.\n";
    }
    else if (number > 0)
    {
        std::cout << number << " is positive.\n";
    }
    else
    {
        std::cout << number << " is neither positive or negative.\n";
    }
    return 0;
}
