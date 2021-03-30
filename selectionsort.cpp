#include <iostream>
using namespace std;
void selectionsort(int *s, int size)
{
    int point = 0;
    int temp;
    int min;
    for (int i = 0; i < size - 1; i++)
    {
        min = s[i];
        temp = s[i];
        for (int j = i + 1; j < size; j++)
        {
            if (min > s[j])
            {
                min = s[j];
                point = j;
            }
        }
        s[i] = min;
        s[point] = temp;
    }
}
void insertionSort(int *s, int size)
{
    int key = 0;
    int j;
    for (int i = 1; i < size; i++)
    {
        j = i - 1;
        key = s[i];
        while (s[j] > key && j >= 0)
        {
            s[j + 1] = s[j];
            j--;
        }
        s[j+1] = key;
    }
}
void bubblesort(int * s , int size){
    int temp = 0;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if (s[j]>s[j+1])
            {
                temp  = s[j+1];
                s[j+1] = s[j];
                s[j] = temp;

            }
            
        }
        
    }
    
}
int main()
{
    int arr[] = {1, 2325, 26, 252, 523, 51, 35, 635, 426, 5, 7, 35, 23, 57, 6, 4, 56, 784, 346, 2};
    int size = sizeof(arr) / sizeof(int);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << endl;
    selectionsort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}