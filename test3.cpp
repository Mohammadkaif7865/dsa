#include <iostream>
using namespace std;
void show(int *s, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
}
void insertionSort(int *s, int size)
{
    int key = 0;
    int j;
    for (int i = 1; i < size; i++)
    {
        key = s[i];
        j = i - 1;
        while (j >= 0 && s[j] > key)
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
                temp = s[j + 1];
                s[j + 1] = s[j];
                s[j] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {23, 326, 37, 4, 73, 45, 35, 4234, 6, 547, 345, 23, 5634, 67, 8, 5, 795, 5, 64, 6, 347, 35};
    int size = sizeof(arr) / sizeof(int);
    bubblesort(arr, size);
    show(arr, size);
    return 0;
}