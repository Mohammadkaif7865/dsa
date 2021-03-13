#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> vect;
    char res = 'y';
    // cout<<"Enter the numbers "<<endl;
    while (res == 'y')
    {
        int n;
        cout<<"Enter the number : "<<endl;
        cin>>n;
        vect.push_back(n);
        cout<<"Do you wnat to add another (y/n) "<<endl;
        cin>>res;
    }
    cout<<"The number in the array are  :";
     for (int x : vect)
        cout << x << " ";
    
    return 0;
}