#include <iostream>
using namespace std;
int partition(int *s, int low, int high)
{
    int i = low + 1;
    int pivot = s[low];
    int j = high;
    int temp = 0;
    do
    {
        while (s[i] < pivot)
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
        int partitionindex = partition(s, low, high);
        Quicksort(s, low, partitionindex - 1);
        Quicksort(s, partitionindex + 1, high);
    }
}
void insertionsort(int *s, int size)
{
    int key, j;
    for (int i = 1; i < size; i++) //Loop for pass
    {
        key = s[i];
        j = i - 1;
        while (j >= 0 && s[j] > key) //Loop for each pass
        {
            s[j + 1] = s[j];
            j--;
        }
        s[j + 1] = key;
    }
}
void bubblesort(int *s, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (s[j] > s[j + 1])
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}
void selectionsort(int *s, int size)
{
    int point = 0;
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        point = i;
        for (int j = i + 1; j < size; j++)
        {
            if (s[j] < s[point])
            {
                point = j;
            }
        }
        temp = s[point];
        s[point] = s[i];
        s[i] = temp;
    }
}
int main()
{
    int arr[] = {4, 523, 53, 74,8, 59, 754, 73, 532, 54, 7, 48, 9, 3, 5347, 56, 87, 345, 64, 763, 6, 436,  46346, 73};
    int size = sizeof(arr) / sizeof(int);
    Quicksort(arr, 0, size - 1);
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}