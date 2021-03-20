/**
 * Side head is the top while using linked list as a stack .
 * stack Empty condition ->(Top == NULL).
 * stack is full when -> Heap memory is exhausted.
 * You can always set a custom size.
 * */
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
int isEmpty(node *top)
{ //head is top
    if (top->next == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFULL()
{
    node *n = new node[sizeof(node)];
    if (n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
node *push(node *top, int value)
{
    node *p = new node[sizeof(node)];
    if (p == NULL)
    {
        cout << "Stack overflow !!!!" << endl;
    }
    else
    {
        p->data = value;
        p->next = top;
        top = p;
        cout << "Successfully pushed !!!!" << endl;
    }
    return top;
}
node *pop(node *top)
{
    if (isEmpty(top))
    {
        cout << "The stack is underFlow " << endl;
    }
    else
    {
        node *n = top;
        top = top->next;
        int x = n->data;
        free(n);
        cout << "Successfully popped  " << x << " !!!!" << endl;
    }

    return top;
}
void show(node *top)
{
    node *ptr = top;
    while (ptr->next != NULL)
    {
        cout << "The element is " << ptr->data << endl;
        ptr = ptr->next;
    }
    cout << "The element is " << ptr->data << endl;
}
int peek(node *top, int index)
{
    node *ptr = top;
    int i = 1;
    while (i != index)
    {
        ptr = ptr->next;
        i++;
        if(ptr->next == NULL){
            cout<<"You entered a wrong index "<<endl;
            return -1;
        }
    }
    return ptr->data;
}
int main()
{
    node *top = NULL;
    top = push(top, 2394);
    top = push(top, 2304);
    top = push(top, 4);
    top = push(top, 2374);
    top = push(top, 23);
    top = push(top, 234);
    top = push(top, 244);
    show(top);
    top = pop(top);
    top = pop(top);
    show(top);
    int value = peek(top, 3);
    cout << "The value at the index is " << value << endl;
    return 0;
}