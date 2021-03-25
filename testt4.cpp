#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *insertionATEnd(node *head, int data)
{
    node *n, *ptr, *p;
    n = new node[sizeof(node)];
    ptr = head;
    p = head->next;
    while (p->next != NULL)
    {
        p = p->next;
        ptr = ptr->next;//i++ analogy
    }
    n->data = data;
    n->next = NULL;
    p->next = n;
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
    int num;
    while (ch != 'n')
    {
        cout << "Enter the number " << endl;
        cin >> num;
        insertionATEnd(head, num);
        cout << "Do  you want enter the another one ";
        cin >> ch;
    }

    show(head);
    return 0;
}