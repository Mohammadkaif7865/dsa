#include <iostream>
using namespace std;
int partition(int *s, int low, int high)
{
    int temp = 0;
    int i = low + 1;
    int j = high;
    int pivot = s[low];
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
    temp = s[low];
    s[low] = s[j];
    s[j] = temp;
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
void insertionSOrt(int *s, int size)
{
    int j;
    int key;
    for (int i = 0; i < size; i++)
    {
        key = s[i];
        j = i - 1;
        while (s[j] > key && j >= 0)
        {
            s[j + 1] = s[j];
            j--;
        }
        s[j + 1] = key;
    }
}
void bubbleSort(int *s, int size)
{
    int temp = 0;
    for (int i = 0; i < size - 1; i++)
    {
       for (int j = 0; j < size-1-i; j++)
       {
           if (s[j]>s[j+1])
           {
               temp = s[j];
               s[j] = s[j+1];
               s[j+1] = temp;
           }
           
       }
       
        
    }
}
void selectionsort(int *s, int size){
    int  index;
    int temp;
    for (int i = 0; i < size; i++)
    {
        index = i;
        for (int j = i+1; j < size; j++)
        {
           if (s[j]<s[index])
           {
               index = j;
           }
            
        }
        temp = s[i];
        s[i] = s[index];
        s[index] = temp ;
    }
    
}
int main()
{
    int arr[] = {1, 645, 7, 96, 98, 67, 45, 23, 4, 35, 4, 65, 76, 8, 67954436, 548, 97, 9, 6754, 6, 45, 7, 569, 80, 8, 57, 9, 67, 9, 34, 35, 4654, 7};
    int count = 0;
    int size = sizeof(arr) / sizeof(int);
    selectionsort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}