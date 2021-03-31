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
        merge(s, low, mid, high);
    }
}
int main()
{
    int arr[] = {124, 23543675, 584, 534253, 7, 8, 79, 345678, 67, 342212, 423, 768, 79, 67978, 6, 7, 56, 45, 3, 1, 2, 423, 54, 67547};
    int size = sizeof(arr) / sizeof(int);
    mergeSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}