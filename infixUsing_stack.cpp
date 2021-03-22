#include <iostream>
#include <cstring>
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
        ch = ptr->arr[ptr->top];
        ptr->top--;
    }
    return ch;
}
int stacktop(stack *ptr)
{
    return ptr->arr[ptr->top];
}
int precedence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '/' || ch == '*')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char *IntoPo(char *infix)
{
    stack *sp;
    sp = new stack[sizeof(stack)];
    sp->size = strlen(infix);
    sp->top = -1;
    sp->arr = new char[sp->size];
    char *postfix = new char[sp->size];
    int i = 0; //Track infix traversal
    int j = 0; // Track postfix addition
    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
           

            if (precedence(infix[i])> precedence(stacktop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!IsEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    char infix[] = "a*b-t/r+b*w";

    cout << "Postfix is " << IntoPo(infix);
    return 0;
}