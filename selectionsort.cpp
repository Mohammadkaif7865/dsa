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
    int arr[] = {34, 10, 9, 976, 56, 123, 65823, 2, 3, 423, 5, 9, 12, 23, 7};
    int size = sizeof(arr) / sizeof(int);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << endl;
    bubblesort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}