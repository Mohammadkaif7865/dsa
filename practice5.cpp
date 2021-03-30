#include <iostream>
using namespace std;
int partition(int *s, int low, int high)
{
    int i = low + 1;
    int j = high;
    int pivot = s[low];
    int temp = 0;
    do
    {
        while (s[i] <= pivot)
        {
            i++;
        }
        while (s[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }

    } while (i < j);
    temp = s[j];
    s[j] = s[low];
    s[low] = temp;
    return j;
}
void Quicksort(int *s, int low, int high)
{
    if (low < high)
    {
        int partitionIndex = partition(s, low, high);
        Quicksort(s, low, partitionIndex - 1);
        Quicksort(s, partitionIndex + 1, high);
    }
}
int main()
{
    int arr[] = {4, 523, 53, 74,8,8, 59, 754, 73, 532, 54, 7, 48, 9, 3, 5347, 56, 87, 345, 64, 763, 6, 436, 8, 46346, 73};
    int size = sizeof(arr) / sizeof(int);
    Quicksort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}