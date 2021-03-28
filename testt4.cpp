#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void insertionATEnd(node *head, int data)
{
    node *n, *ptr, *p;
    n = new node[sizeof(node)];
    ptr = head;
    p = head->next;
    while (p->next != NULL)
    {
        p = p->next;
        ptr = ptr->next; //i++ analogy
    }
    n->data = data;
    n->next = NULL;
    p->next = n;
}
node *insertionATstart(node *head, int data)
{
    node *n = new node[sizeof(node)];
    n->data = data;
    n->next = head;
    head = n;
    return head;
}
void show(node *head)
{
    node *ptr = head;
    while (ptr->next != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << ptr->data;
}
node *deletionAtstart(node * head){
    node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
void deletionATend(node *head)
{
    node *ptr, *p;
    ptr = head;
    p = head->next;
    while (p->next != NULL)
    {
        p = p->next;
        ptr = ptr->next;
    }
    ptr->next = NULL;
    free(p);
}
int main()
{
    node *head, *tail;
    head = new node[sizeof(node)];
    tail = new node[sizeof(node)];
    head->data = 100;
    head->next = tail;
    tail->data = 121;
    tail->next = NULL;
    char ch = 'y';
    char ch1 = 'y';
    int num;
    while (ch != 'n')
    {
        cout << "Enter the number to add at end " << endl;
        cin >> num;
        insertionATEnd(head, num);
        cout << "Do  you want enter the another one at end ";
        cin >> ch;
    }
    while (ch1 != 'n')
    {
        cout << "Enter the number to add at start " << endl;
        cin >> num;
        head = insertionATstart(head, num);
        cout << "Do  you want enter the another one at start ";
        cin >> ch1;
    }
    show(head);
    cout<<endl;
    deletionATend(head);
    show(head);
    cout<<endl;
    head =  deletionAtstart(head);
    show(head);
    return 0;
}