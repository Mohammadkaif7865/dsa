#include<iostream>
using namespace std;
struct node{
    int data;
    node * next;

};
//case1
void LinkedListTraversal(struct node * ptr){
    while (ptr!=NULL)
    {
        cout<<"Element : "<<ptr->data<<endl;
        ptr = ptr ->next;
    }
    
}
//case2
node * insertATfirst(node * head , int data){
    node * ptr = new node[sizeof(node)];
    ptr->next = head;
    ptr->data = data;
    return ptr;

}
//case3
node * insertATend(node * head , int data){
    node * ptr = new node[sizeof(node)];
    node *p = head ;
    ptr->data = data;
    while (p->next != NULL)
    {
        /* code */
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;

}
//case4
node * insertAfterNode(node * head ,node * prevnode, int data){
    node * ptr = new node[sizeof(node)];
    
    ptr->data = data;
    ptr->next= prevnode->next;
    prevnode->next = ptr;
   
    return head;

}
//case5
node * insertATindex(node * head , int data, int index){
    node * ptr = new node[sizeof(node)];
    node * p = head;
    int i = 0;
    while (i!= index-1)
    {
        /* code */
        p = p->next;
        i++;

    }
    ptr->data = data;
    ptr->next = p ->next;
    p->next = ptr;
    return head;

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
    n1 = insertAfterNode(n1,n3,56);
    cout<<"The new linked list is "<<endl;
    LinkedListTraversal(n1);

    return 0;
}