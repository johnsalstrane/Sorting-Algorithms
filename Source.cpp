
#include <iostream>
#include "SortingAlgorithms.h"


void DisplayArray(int array[], int arraySize);

int main(void)
{
    int array1[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
    int array1size = 10;

    int array2[10] = { 95, 22, 58, -4, -111, 126, 1, 0, -1 };
    int array2size = 9;

    DisplayArray(array1, array1size);
    std::cout << std::endl;

    MergeSort(array1, 0, array1size-1);
    DisplayArray(array1, array1size);
    std::cout << std::endl;
    std::cout << std::endl;


    DisplayArray(array2, array2size);
    std::cout << std::endl;
    MergeSort(array2, 0, array2size-1);
    DisplayArray(array2, array2size);


}

void DisplayArray(int array[], int arraySize)
{
    for (size_t i = 0; i < arraySize; i++)
    {
        std::cout << array[i] << " ";
    }
}