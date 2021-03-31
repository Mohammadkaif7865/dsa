#include <iostream>
#include <climits>
using namespace std;
int isMAAX(int *s, int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max < s[i])
        {
            max = s[i];
        }
    }
    return max;
}
void countsort(int *s, int size)
{
    int i, j;
    int max = isMAAX(s, size);
    int *count = new int[(max + 1) * sizeof(int)];
    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    for (i = 0; i < size; i++)
    {
        count[s[i]] = count[s[i]] + 1;
    }
    //yahan tak sab changa si
    // for (int i = 0; i < max + 1; i++)
    // {
    //     cout << count[i] << " ";
    // }
    i = 0;
    j = 0;
    while (i <= max) //i for count j for main array
    {
    here:
        if (count[i] > 0)
        {
            s[j] = i;
            j++;
            count[i]--;
            if (count[i] > 0)
            {
                goto here;
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int arr[] = {48, 435, 3, 345,4,6,7865,8,79,4,35,47,4587,586,754,3,44, 3, 3, 657, 68, 678};
    int size = sizeof(arr) / sizeof(int);
    cout << isMAAX(arr, size) << endl;
    countsort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}