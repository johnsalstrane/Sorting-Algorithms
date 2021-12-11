void SelectionSort(int array[], int arraySize);
void BubbleSort(int array[], int arraySize);
void MergeSort(int array[], int l, int r);
void Merge(int array[], int left, int mid, int right);


void SelectionSort(int array[], int arraySize)
{
    bool switchtookplace = false;
    for (size_t i = 0; i < arraySize; i++)
    {
        int* smallest = &array[i];
        switchtookplace = false;
        for (size_t j = i + 1; j < arraySize; j++)
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
    int* largest = &array[0];
    bool switched;
    for (size_t i = 0; i < arraySize; i++)
    {
        switched = false;
        for (size_t j = 0; j < arraySize - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
                switched = true;
            }
        }
    }

}

//int array1[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
void MergeSort(int array[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;

        MergeSort(array, l, m);
        MergeSort(array, m + 1, r);

        Merge(array, l, m, r);
    }
}

void Merge(int array[], int const left, int const mid, int const right)
{
    auto const n1 = mid - left + 1;
    auto const n2 = right - mid;

    auto* leftArray = new int[n1],
        * rightArray = new int[n2];

    for (auto i = 0; i < n1; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < n2; j++)
        rightArray[j] = array[mid + 1 + j];

    auto indesOfSubArrayOne = 0,
        indexOfSubArrayTwo = 0;
    int indexOfMergedArray = left;

    while (indesOfSubArrayOne < n1 && indexOfSubArrayTwo < n2) {
        if (leftArray[indesOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray] = leftArray[indesOfSubArrayOne];
            indesOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }

    while (indesOfSubArrayOne < n1)
    {
        array[indexOfMergedArray] = leftArray[indesOfSubArrayOne];
        indesOfSubArrayOne++;
        indexOfMergedArray++;
    }

    while (indexOfSubArrayTwo < n2)
    {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}
