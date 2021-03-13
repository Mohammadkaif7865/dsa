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
    struct node * head ;
    struct node * second;
    struct node * third ;
    struct node * fourth ;
    //Allocate memory for nodes in the linked list in Heap 
    head =  new  node[sizeof( node)];
    second =  new  node[sizeof( node)];
    third =  new  node[sizeof( node)];
    fourth =  new  node[sizeof( node)];
    //link first and second nodes
    head->data = 7;
    head->next = second;
    second ->data = 11;
    second ->next = third;
    third ->data = 233;
    third ->next = fourth;
    fourth ->data = 124;
    fourth ->next = NULL;
    LinkedListTraversal(head);
    return 0;
}