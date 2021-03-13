#include<iostream>
using namespace std;
struct myArray
{
    int total_size;
    int use_size;
    int *ptr;

};
void create_array(myArray * a, int size, int used){
       a->total_size = size;
       a->use_size = used;
       a->ptr = new int[size];
}
void set_array(myArray * a)
{    int n;
    for (int i = 0; i < a->use_size ; i++)
    {
        cout<<"Enter the value of element "<<i<<" ";
        cin>>n;
        (a->ptr)[i]=n;
    }

    
}
void get_Data(myArray * a){
    for (int i = 0; i < a->use_size; i++)
    {
        cout<<"The value of element  "<<i<<" is "<<a->ptr[i]<<endl;
    }
    
}
int main(){
    myArray marks;
    int s,u;
    cout<<"Enter the size of array you want : ";
    cin>>s;
    cout<<"Enter the size of array you will use : ";
    cin>>u;
    create_array(&marks, s, u);
    cout<<"Give the inputs :"<<endl;
    set_array(&marks);
    cout<<"Here get data is being called "<<endl;
    get_Data(&marks);
    return 0;
}