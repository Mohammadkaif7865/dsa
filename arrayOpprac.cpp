#include<iostream>
using namespace std;
void show(int arr[], int n){
     for (int  i = 0; i < n; i++)
     {
        cout<<arr[i]<<" ";
     }
     
}
int insertintoarry(int arr[], int size , int index ,int capacity, int element ){
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1]= arr[i];

    }
    arr[index]= element;
    return 1;
    
}
int main(){
    int arr[100] = {12,534,532,2342,243},size = 5,index ,capacity, element;
    capacity = sizeof(arr)/4;
    show(arr , size);
    cout<<"\nEnter the index where you want to place your number ";
    cin>>index;
    cout<<"\nEnter the number or element ";
    cin>>element;
    insertintoarry(arr , size , index , capacity, element);
    show(arr, size+1);
    return 0;
}