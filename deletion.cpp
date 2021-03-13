#include <iostream>
using namespace std;
void display(int arr[], int size)
{
    cout << "The element of array is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int deletion(int arr[], int capacity, int index, int size)
{
    if (index >= size || index >= capacity)
    {
        cout << "Sorry you made a mistake "<<"\n";
        return -1;
    }
    else
    {
        for (int i = index; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
        return 1;
    }
}
int main()
{
    int arr[100] = {12, 412, 12, 452, 43}, index, capacity, size;
    size = 5;
    capacity = sizeof(arr) / 4;
    display(arr, size);
    cout << "\nEnter the element index which you want to delete " << endl;
    cin >> index;

    deletion(arr, capacity, index, size);
    display(arr, size - 1);
    return 0;
}