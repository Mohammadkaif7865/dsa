#include <iostream>
using namespace std;
int partition(int *s, int low, int high)
{
    int pivot = s[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (s[i]<=pivot)
        {
            i++;
        }
        while (s[j]>pivot)
        {
            j--;
        }
        if (i<j)
        {
            temp = s[j];
            s[j] = s[i];
            s[i] = temp;
        }
        
        
        
    } while (i<j);
    temp = s[low];
    s[low] = s[j];
    s[j] = temp;
    return j;
}
void Quicksort(int *s, int low, int high)
{
    if (low<high)
    {
        int partitionIndex = partition(s,low,high);
        Quicksort(s,low,partitionIndex-1);
        Quicksort(s,partitionIndex+1,high);
    }
    
}
int main()
{
    int arr[] = {45645, 78, 6954, 34, 4, 5, 78, 68, 979, 7, 95, 335232, 654, 765, 76, 7, 87, 8};
    int size = sizeof(arr) / sizeof(int);
    Quicksort(arr, 0,size-1);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}