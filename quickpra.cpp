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
        int partitionIndex ;
        partitionIndex = partition(A, low, high);
        QuickSort(A, low, partitionIndex - 1);
        QuickSort(A, partitionIndex + 1, high);
    }
}
int main()
{
    int Arr[] = {5, 654, 52, 3, 746, 89, 4, 53, 211, 2, 8, 679, 784, 534, 2, 4, 787, 9, 99, 35, 58, 7, 9, 46, 326, 49, 90, 43, 31, 12};
    int size = sizeof(Arr) / sizeof(int);
    QuickSort(Arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}