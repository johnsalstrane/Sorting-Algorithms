
#include <iostream>

void SelectionSort(int array[], int arraySize);
void DisplayArray(int array[], int arraySize);

int main(void)
{
    int array1[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
    int array1size = 10;

    int array2[10] = { 95, 22, 58, -4, -111, 126, 1, 0, -1 };
    int array2size = 9;

    DisplayArray(array1, array1size);
    std::cout << std::endl;

    SelectionSort(array1, array1size);
    DisplayArray(array1, array1size);
    std::cout << std::endl;
    std::cout << std::endl;


    DisplayArray(array2, array2size);
    std::cout << std::endl;
    SelectionSort(array2, array2size);
    DisplayArray(array2, array2size);


}

void SelectionSort(int array[], int arraySize)
{
    bool switchtookplace = false;
    for (size_t i = 0; i < arraySize; i++)
    {
        int* smallest = &array[i];
        switchtookplace = false;
        for (size_t j = i+1; j < arraySize; j++)
        {
            if (array[j] < *smallest)
            {
                smallest = &array[j];
                switchtookplace = true;
            }
        }
        if (switchtookplace)
        {
            int temp = array[i];
            array[i] = *smallest;
            *smallest = temp;
        }
    }
}

void BubbleSort(int array[], int arraySize)
{

}

void DisplayArray(int array[], int arraySize)
{
    for (size_t i = 0; i < arraySize; i++)
    {
        std::cout << array[i] << " ";
    }
}