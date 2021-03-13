#include <iostream>
using namespace std;
// int linearSearch(int arr[], int size, int element)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == element)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else if (arr[mid] > element)
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    //Unsorted array for linear search
    // int arr[] = {1, 43, 53, 53, 42, 424, 2, 43, 5, 5, 34, 23, 3, 41};
    // int size = sizeof(arr) / sizeof(int);
    int element;
    int arr[] = {1, 2, 43, 56, 67, 87, 97, 99, 123, 355, 675, 787, 986, 1234, 5225, 6433};
    int size = sizeof(arr) / sizeof(int);
    //Sorted array for binary search
    cout << "Enter the element you want to find ";
    cin >> element;
    int searchIndex = binarySearch(arr, size, element);
    // int searchIndex = linearSearch(arr, size, element);
    cout << "The element  " << element << " found at index " << searchIndex;
    return 0;
}