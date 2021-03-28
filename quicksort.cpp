#include <iostream>
using namespace std;
int partition(int *A, int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);
    //swap A[low ] & A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}
void QuickSort(int *A, int low, int high)
{
    if (low < high)

    {
        int partitionIndex;
        partitionIndex = partition(A, low, high);
        QuickSort(A, low, partitionIndex - 1);  //sort left subarray
        QuickSort(A, partitionIndex + 1, high); //sort right subarray
    }
}
int main()
{
    int arr[] = {34, 10, 9, 976, 56, 123, 65823, 2, 3, 423, 5, 9, 12, 23, 7};
    int size = sizeof(arr) / sizeof(int);
    QuickSort(arr, 0 , size-1);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}