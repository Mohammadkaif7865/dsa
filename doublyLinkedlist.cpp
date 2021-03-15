#include<iostream>
using namespace std;
struct node{
    int data;
    node * prev;
    node * next;
};
node * forwardTraversal(node * head){
    node * ptr = head ;
    do
    {
        cout<<"Element is : "<<ptr->data<<endl;
        ptr=ptr->next;
    } while (ptr->next!= NULL);
    return head;
    
}
node * BackwardTraversal(node * tail){
    node * ptr = tail ;
    do
    {
        cout<<"Element is : "<<ptr->data<<endl;
        ptr=ptr->prev;
    }while (ptr->prev!= NULL);
    return tail;
    
}
int main(){
    node * head , *n2 , *n3 , *n4 , *n5, *n6, *tail;
    head = new node[sizeof(node)];
    n2 = new node[sizeof(node)];
    n3 = new node[sizeof(node)];
    n4 = new node[sizeof(node)];
    n5 = new node[sizeof(node)];
    n6 = new node[sizeof(node)];
    head->data = 123;
    head->next = n2;
    head->prev = NULL;
    n2->data = 345;
    n2->next =n3;
    n2->prev = head;
    n3->data = 3435;
    n3->next = n4;
    n3->prev = n2;
    n4->data = 32167;
    n4->next = n5;
    n4->prev = n3;
    n5->data = 8965;
    n5->next = n6;
    n5->prev = n4;
    n6->data = 6743;
    n6->next = tail;
    n6->prev = n5;
    tail->data = 8696;
    tail->next = NULL;
    tail->prev = n6;
    BackwardTraversal(tail);

    return 0;
}