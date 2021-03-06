#include <iostream>
using namespace std;
void merge(int *s, int low, int mid, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (s[i] < s[j])
        {
            B[k] = s[i];
            i++;
            k++;
        }
        else
        {
            B[k] = s[j];
            j++;
            k++;
        }
    }
    while (i <= mid) 
    {
        B[k] = s[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = s[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        s[i] = B[i];
    }
}

void mergeSort(int *s, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(s, low, mid);
        mergeSort(s, mid + 1, high);
        merge(s, low ,mid, high);//here was the error
    }
}
int main()
{
    int A[] = {324, 4325, 4657, 686, 87856, 45, 43223, 4, 6346, 576, 86346, 44, 54, 534, 33, 1};
    int size = sizeof(A) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    mergeSort(A, 0, size-1);
    cout << endl
         << "After the mergesort :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}