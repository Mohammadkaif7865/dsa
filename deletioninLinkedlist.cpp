#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void display(node *ptr)
{
    while (ptr->next != NULL)
    {
        cout << "Element is : " << ptr->data << endl;
        ptr = ptr->next;
    }
}
// Case 1 : Deleting the first element from the linked list
node *deletefirst(node *head)
{
    node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
//case2 : deleting a element at a given index

node *deleteinBetween(node *head, int index)
{
    node *ptr = head;
    node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        ptr = ptr->next;
        q = q->next;
    }
    ptr->next = q->next;
    free(q);
    return head;
}
//Case 3 : Delete the last element
node *Deletethelast(node *head)
{
    node *ptr = head;
    node *q = head->next;
    while (q->next != NULL)
    {
        ptr = ptr->next;
        q = q->next;
    }
    ptr->next = NULL;
    free(q);
    return head;
}
// Case 4 : deleting the node with a given value
node *Deletethenode_byvalue(node *head, int clue)
{
    node *ptr = head;
    node *q = head->next;
    while (q->data != clue && q->next != NULL)
    {
        ptr = ptr->next;
        q = q->next;
    }
    if (q->data == clue)
    {
        ptr->next = q->next;
        free(q);
    }
    return head;
}

int main()
{
    node *head, *n1, *n2, *n3, *n4, *n5, *n6;
    head = new node[sizeof(node)];
    n1 = new node[sizeof(node)];
    n2 = new node[sizeof(node)];
    n3 = new node[sizeof(node)];
    n4 = new node[sizeof(node)];
    n5 = new node[sizeof(node)];
    n6 = new node[sizeof(node)];
    head->data = 34;
    head->next = n1;
    n1->data = 234;
    n1->next = n2;
    n2->data = 343;
    n2->next = n3;
    n3->data = 3423;
    n3->next = n4;
    n4->data = 3424;
    n4->next = n5;
    n5->data = 3467;
    n5->next = n6;
    n6->data = 3223;
    n6->next = NULL;
    cout << "Linked list before traversal " << endl;
    display(head);
    // head = deleteinBetween(head, 4); //fpr deleting the first element of linkedlist
    // head = deletefirst(head);
    head = Deletethenode_byvalue(head, 3423);
    cout << "Linked list after traversal " << endl;
    display(head);
    return 0;
}