#include <iostream>
using namespace std;
void bubblesort(int *s, int n)
{
    int count = 0;
    int temp = 0;
    for (int i = 0; i < n - 1; i++) //passing the array
    {
        cout << "Passing the array time " << i + 1 << endl;
        for (int j = 0; j < n - i - 1; j++) //For the comparison of array in each pass
        {
            if (s[j] > s[j + 1])
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
                count++;
            }
        }
        if (count == 0)
        {
            cout << "the array is already sorted " << endl;
            return;
        }
    }
}
int main()
{
    // int arr[] = {3, 5346, 3462, 5, 73, 99, 10, 84, 1};
    int arr[] = {1, 2, 3, 3, 56, 89, 5, 6, 7};
    int size = sizeof(arr) / sizeof(int);
    bubblesort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << "The element " << i + 1 << " is " << arr[i] << endl;
    }

    return 0;
}