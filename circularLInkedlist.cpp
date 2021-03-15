#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *TraversingInCircularLinkedList(node *head)
{
    node *ptr = head;
    do
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr->next != head);
    cout << "Element : " << ptr->data << endl;
    ptr = ptr->next;
    return head;
}
node * InsertAtfirstInCircularLInkedList(node * head, int data){
        node * ptr = new node[sizeof(node)];
        ptr->data  =data;
        node * p = head->next;
        while (p->next!= head)
        {
            p = p->next;
        }
        p->next = ptr;
        ptr->next = head;
        head = ptr;
        return head;

}
int main()
{
    node *head, *n2, *n3, *n4, *n5, *n6;
    head = new node[sizeof(node)];
    n2 = new node[sizeof(node)];
    n3 = new node[sizeof(node)];
    n4 = new node[sizeof(node)];
    n4 = new node[sizeof(node)];
    n5 = new node[sizeof(node)];
    n6 = new node[sizeof(node)];
    head->data = 455;
    head->next = n2;
    n2->data = 3254;
    n2->next = n3;
    n3->data = 435;
    n3->next = n4;
    n4->data = 235;
    n4->next = n5;
    n5->data = 431;
    n5->next = n6;
    n6->data = 12069;
    n6->next = head;
    cout<<"Linket list before insertion  : "<<endl;
    TraversingInCircularLinkedList(head);
    head =InsertAtfirstInCircularLInkedList(head , 4552);
    cout<<"Linked list after Insertion "<<endl;
    TraversingInCircularLinkedList(head);
    return 0;
}