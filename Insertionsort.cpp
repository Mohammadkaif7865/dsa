#include <iostream>
using namespace std;
void insertionSort(int *s, int size)
{
    int key,j;
    for (int i = 1; i < size; i++) //Loop for pass
    {
        key = s[i];
        j = i-1;
        while (j>=0 &&s[j]>key) //Loop for each pass
        {
            s[j+1] = s[j];
            j--;
        }
        s[j+1] = key;  
    }
}
int main()
{
     // -1   0    1   2   3   4   5
   //      12,| 54, 65, 07, 23, 09 --> i=1, key=54, j=0
   //      12,| 54, 65, 07, 23, 09 --> 1st pass done (i=1)!

   //      12, 54,| 65, 07, 23, 09 --> i=2, key=65, j=1
   //      12, 54,| 65, 07, 23, 09 --> 2nd pass done (i=2)!

   //      12, 54, 65,| 07, 23, 09 --> i=3, key=7, j=2
   //      12, 54, 65,| 65, 23, 09 --> i=3, key=7, j=1
   //      12, 54, 54,| 65, 23, 09 --> i=3, key=7, j=0
   //      12, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1
   //      07, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1--> 3rd pass done (i=3)!

   // Fast forwarding and 4th and 5th pass will give:
   //      07, 12, 54, 65,| 23, 09 --> i=4, key=23, j=3
   //      07, 12, 23, 54,| 65, 09 --> After the 4th pass

   //      07, 12, 23, 54, 65,| 09 --> i=5, key=09, j=4
   //      07, 09, 12, 23, 54, 65| --> After the 5th pass 
    
    int arr[] = {45645, 78, 6954, 34, 4, 5, 78, 68, 979, 7, 95, 335232, 654, 765, 76, 7, 87, 8};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "-";
    }
    cout<<endl;
    insertionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "-";
    }
    return 0;
}