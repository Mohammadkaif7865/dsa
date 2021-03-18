#include <iostream>
using namespace std;
struct stack
{
    int top = -1;
    int *arr;
    int size;
};
int isEmpty(stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }    
}
int isFull(stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    stack *s;
    s->size = 80;
    s->arr = new int[s->size];
    s->arr[0] = 4;
    s->top++;

    if (isEmpty(s))
    {
        cout << "The stack is empty " << endl;
    }
    else
    {
        cout << "The stack is not empty " << endl;
    }

    return 0;
}