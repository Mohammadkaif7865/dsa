#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *r = NULL;
node *f = NULL;
void Linketlisttraversal(node *ptr)
{
    cout << "Printing the value of queue " << endl;
    while (ptr != NULL)
    {
        cout << "Element  : " << ptr->data << endl;
        ptr = ptr->next;
    }
}
void enqueue(int val)
{
    node *n = new node[sizeof(node)];
    if (n == NULL)
    {
        cout << "The queue is full ";
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}
int dequeue(){
    int d = -1;
    node * ptr;
    ptr= f;
    if (f==NULL)
    {
        cout<<"The queue is empty !!!!! "<<endl;
    }
    else
    {
        f = f->next;
        d = ptr->data;
        free(ptr);
    }
    return d;
    
}
int main()
{

    enqueue(23);
    enqueue(2);
    enqueue(3);
    dequeue();
    enqueue(83);
    enqueue(39);
    enqueue(30);
    enqueue(343);
    dequeue();
    dequeue();
    Linketlisttraversal(f);
    return 0;
}