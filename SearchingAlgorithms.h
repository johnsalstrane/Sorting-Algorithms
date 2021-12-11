
int BinarySearch(int array[], int left, int right, int x)
{
    if (right >= left)
    {
        int mid = left + (right - left) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] > x)
        {
            return BinarySearch(array, 1, mid - 1, x);
        }

        return BinarySearch(array, mid + 1, right, x);
    }
    return -1;
}