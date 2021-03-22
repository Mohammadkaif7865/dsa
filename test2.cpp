#include <iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    char *arr;
};
int IsEmpty(stack *ptr)
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
int IsFull(stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(stack *ptr, char data)
{
    if (IsFull(ptr))
    {
        cout << "Stack overflow !!!! " << endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
}
char pop(stack *ptr)
{
    char ch;
    if (IsEmpty(ptr))
    {
        cout<<"The stack is underflow !!!! ";
    }
    else
    {
        ch = ptr->arr[ptr->top];//Error was here 
        ptr->top--;
    }
    return ch;
}
int main()
{
    stack *sp;
    sp = new stack[sizeof(stack)];
    sp->top = -1;
    sp->size = 10;
    sp->arr = new char[sp->size];
    push(sp ,'r');
    char ch = pop(sp);
    cout<<ch;
    return 0;
}