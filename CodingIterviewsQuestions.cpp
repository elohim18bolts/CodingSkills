// CodingIterviewsQuestions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include "utils.h"

int main()
{
    int arr[] = { 3, 7, 5,10, 6, 9 };
    int size = sizeof(arr) / sizeof(int);
    int right; int left;
    int max = -1; int min = 100;
    right = left = -1;
    for (int i = 0; i < size; i++)
    {
        max = std::_Max_value<int>(max, arr[i]);
        if (arr[i] < max)
            right = i;
    }
    for (int i = size - 1; i >= 0; i--)
    {
        min = std::_Min_value(min, arr[i]);
        if (arr[i] > min)
            left = i;
    }
    std::cout << std::numeric_limits<int>::max();
   

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
