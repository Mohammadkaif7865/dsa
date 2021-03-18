#include <iostream>
using namespace std;
struct node
{
    int data;
    node *prev;
    node *next;
};
node *forwardTraversal(node *head)
{
    node *ptr = head;
    do
    {
        cout << "Element is : " << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr->next != NULL);
    cout << "Element is : " << ptr->data << endl;
    return head;
}
node *BackwardTraversal(node *tail)
{
    node *ptr = tail;
    do
    {
        cout << "Element is : " << ptr->data << endl;
        ptr = ptr->prev;
    } while (ptr->prev != NULL);
    cout << "Element is : " << ptr->data << endl;
    return tail;
}
node *Deleting_firstnode(node *head)
{
    node *ptr;
    ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
node *Deleting_Lastnode(node *head)
{
    node *ptr;
    ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
node *Insertion_in_DL_L(node *head, int index, int data)
{
    node *ptr = head;
    for (int i = 0; i < index - 1; i++)
    {
        ptr = ptr->next;
    }
    node *p;
    p = new node[sizeof(node)];
    p->data = data;
    p->next = ptr->next;
    p->prev = ptr;
    (ptr->next)->prev = p;
    ptr->next = p;
    return head;
}
node * Insert_at_first(node * head , int data){
     node * ptr;
     ptr = new node[sizeof(node)];
     ptr->data = data;
     ptr->next = head;
     ptr->prev = NULL;
     head ->prev = ptr;
     head  = ptr;
     return head;
}
int main()
{
    node *head, *n2, *n3, *n4, *n5, *n6, *tail;
    head = new node[sizeof(node)];
    n2 = new node[sizeof(node)];
    n3 = new node[sizeof(node)];
    n4 = new node[sizeof(node)];
    n5 = new node[sizeof(node)];
    n6 = new node[sizeof(node)];
    tail = new node[sizeof(node)];
    head->data = 123;
    head->next = n2;
    head->prev = NULL;
    n2->data = 345;
    n2->next = n3;
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
    cout << "This is a forward traversal of Doubly linked list : " << endl;
    forwardTraversal(head);
    // head = Deleting_firstnode(head);
    head = Insert_at_first(head,2100);
    cout << "Is is L-L after the deletion of first node " << endl;
    forwardTraversal(head);
    cout<<"This is the backward traversal of Doubly linked list : "<<endl;
    BackwardTraversal(tail);
    return 0;
}