#include <iostream>
using namespace std;
int isMAAX(int *s, int size)
{
    int max = s[0];
    for (int i = 0; i < size; i++)
    {
        if (max < s[i + 1])
        {
            max = s[i + 1];
        }
    }
    return max;
}
void countsort(int *s, int size)
{
    int max = isMAAX(s, size);
    int newarr[max];

}
int main()
{
    int arr[] = {100000, 5246, 48, 99999, 435, 3, 4, 3, 657, 68, 678};
    int size = sizeof(arr) / sizeof(int);
    
    return 0;
}