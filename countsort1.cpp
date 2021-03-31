#include <iostream>
using namespace std;
int isMAAX(int *s, int size)
{
    int max = 0;
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
    int *count = new int[(max + 1)*sizeof(int)];
    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < size; i++)
    {
        count[s[i]] = count[s[i]] + 1;
    }
    i = 0;
    j = 0;
    while (i < max + 1)
    {
        if (count[i] > 0)
        {
            s[j] = i;
            count[j] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int arr[] = {100000, 5246, 48, 99999, 435, 3, 4, 3, 657, 68, 678};
    int size = sizeof(arr) / sizeof(int);
    int max = isMAAX(arr, size);
    cout<<max<<endl;
    countsort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}