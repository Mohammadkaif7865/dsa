#include<iostream>
using namespace std;
struct node{
    int data;
    node * next;

};
void LinkedListTraversal(struct node * ptr){
    while (ptr!=NULL)
    {
        cout<<"Element : "<<ptr->data<<endl;
        ptr = ptr ->next;
    }
    
}
int main(){
    node *n1 , *n2, *n3,*n4;
    n1 = new node [sizeof(node)];
    n2 = new node [sizeof(node)];
    n3 = new node [sizeof(node)];
    n4 = new node [sizeof(node)];
    n1->data = 234;
    n1->next = n2;
    n2->data = 4543;
    n2->next = n3;
    n3->data = 453;
    n3->next = n4;
    n4->data = 534;
    n4->next = NULL;
    LinkedListTraversal(n1);
    return 0;
}