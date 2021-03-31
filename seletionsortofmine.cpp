#include <iostream>
using namespace std;
void mysorting(int *s, int size)
{
    int temp;
    int max;
    int index;
    for (int i = size - 1; i >= 0; i--)
    {
        max = s[i];
        for (int j = 0; j < i; j++)
        {
            if (s[j] > max)
            {
                max = s[j];
                index = j;
            }
        }
        temp  = s[i];
        s[i] = max;
        s[index]  = temp;
        
    }
}
int main()
{
    int arr[] = {324, 4325, 4657, 686, 87856, 45, 43223, 4, 6346, 576, 86346, 44, 54, 534, 33, 1};
    int size = sizeof(arr) / sizeof(int);
     mysorting(arr,size);
     for (int i = 0; i < size; i++)
     {
         cout<<arr[i]<<" ";
     }
     
    return 0;
}