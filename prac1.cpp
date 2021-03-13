#include<iostream>
using namespace std;
struct student{
   int marks;
   int rollno;
};
int main(){
    student s {234, 535};//We can intialise the construtor of structure
    cout<<s.marks;
    cout<<endl<<s.rollno;
    return 0;
}