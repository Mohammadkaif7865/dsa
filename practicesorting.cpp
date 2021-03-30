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
    int min;
    for (int i = 0; i < size - 1; i++)
    {
        min = s[i];
        for (int j = i + 1; j < size; j++)
        {
            if (min > s[j])
            {
                min = s[j];
                point = j;
            }
        }
        temp = s[i];
        s[i] = min;
        s[point] = temp;
    }
}
// }{
//     int key,j;
//     for (int i = 1; i < size; i++) //Loop for pass
//     {
//         key = s[i];
//         j = i-1;
//         while (j>=0 &&s[j]>key) //Loop for each pass
//         {
//             s[j+1] = s[j];
//             j--;
//         }
//         s[j+1] = key;
//     }
// }
int main()
{
    int arr[] = {1, 2325, 26, 252, 523, 51, 35, 635, 426, 5, 7, 35, 23, 57, 6, 4, 56, 784, 346, 2};
    int size = sizeof(arr) / sizeof(int);
    selectionsort(arr,size);
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}