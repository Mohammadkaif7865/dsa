#include <iostream>
#include <cstring>
using namespace std;
struct stack
{
    int size;
    int top;
    char *arr;
};
int isFull(stack *sp)
{
    if (sp->top == sp->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(stack *sp)
{
    if (sp->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(stack *ptr, char data)
{
    if (isFull(ptr))
    {
        cout << "Stack Overflow !!!!! " << endl;
        return ptr->top;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
    return ptr->top;
}
int pop(stack *ptr)
{
    char ch;
    if (isEmpty(ptr))
    {
        cout << "Stack UnderFlow !!!!! " << endl;
        return ptr->top;
    }
    else
    {
        ch = ptr->arr[ptr->top];
        ptr->top--;
    }
    return ch;
}
int match(char a, char b)
{
    if (a == '{' && b == '}')
    {
        return 1;
    }
    if (a == '[' && b == ']')
    {
        return 1;
    }
    if (a == '(' && b == ')')
    {
        return 1;
    }
    return 0;
}
int parenthesisMatch(char *exp)
{
    stack *sp;
    sp = new stack[sizeof(stack)];
    sp->size = strlen(exp);
    sp->top = -1;
    sp->arr = new char[sizeof(char) * sp->size];
    char ch;
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            push(sp, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            else
            {
                ch = pop(sp);
                if (!match(ch, exp[i]))
                {
                    return 0;
                }
            }
        }
    }
    if (isEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }

    return 5;
}

int main()
{
    char exp[] = "{69+7*(87+97-9)+(89/32)}";
    if (parenthesisMatch(exp))
    {
        cout << "The parenthesis is matching " << endl;
    }
    else
    {
        cout << "The parenthesis is not matching " << endl;
    }

    return 0;
}