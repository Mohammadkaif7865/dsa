#include <iostream>
using namespace std;
int findIndex(int arr[], int size, int clue)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == clue)
        {
            cout << "Element is at " << i << " index " << endl;
        }
    }
    return 1;
}
int main()
{
    int arr[10] = {21, 435, 21, 34, 525, 1, 454, 9665, 21, 43}, clue;
    int size = sizeof(arr) / 4;
    cout << "Enter the element you want to search ";
    cin >> clue;
    findIndex(arr, size, clue);
    return 0;
}