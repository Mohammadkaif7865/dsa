#include <iostream>
using namespace std;
int mini(int *s, int size)
{
    int min = s[0];
    for (int i = 0; i < size; i++)
    {
        
        if (min > s[i + 1])
        {
            min = s[i + 1];
        }
    }
    return min;
}
int main()
{
    int A[] = {3, 537,-2, 0, 42, 743, 11, 1, 52, 87};
    int x = sizeof(A) / sizeof(int);
    int low = mini(A, x);
    cout << low;
    return 0;
}