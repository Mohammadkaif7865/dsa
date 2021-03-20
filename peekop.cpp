#include <iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    int *arr;
};
int isFull(stack *ptr)
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
int pop(stack *ptr)
{
    if (isEmpty(ptr))
    {
        cout<<"The stack is underflow !!!! cannot able to pop the value at  "<<ptr->top<<endl;
        return -1;
    }
    else
    {
        int value = ptr->arr[ptr->top];
        ptr->top--;
        cout<<"Pop successfully "<<value<<endl;
        return value;
    }
    
    
}
int peek(stack * ptr, int i){
    int arrayInd = ptr->top - i + 1;
    if ( arrayInd<0)
    {
        cout<<"Not a valid position for  the stack"<<endl;
        return -1;
    }
    else
    {
        return ptr->arr[arrayInd];
    }  
}
int stackbottom(stack * ptr){
    return ptr->arr[ptr->top];
}
int stackbottom(stack * ptr){
    return ptr->arr[0];
}
void show(stack *ptr){
    for (int i = 0; i <= ptr->top; i++)
    {
        cout<<"The element "<<i<<" is "<<ptr->arr[i]<<endl;
    }
    
}
void push(stack *ptr, int data)
{
    if (isFull(ptr))
    {
        cout << "Stack overflow !!! cannot able to push the value : "<<data<<endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = data;
        cout<<"Pushed successfully "<<data<<endl;
    }
}
int main()
{
    stack *sp;
    sp = new stack[sizeof(stack)];
    sp->size = 8;
    sp->top = -1;
    sp->arr = new int[sizeof(int) * sp->size];
    cout << "Stack has been created successfully" << endl;
    push(sp ,56);
    push(sp ,6);
    push(sp ,5);
    push(sp ,526);
    push(sp ,156);
    push(sp ,256);
    push(sp ,456);
    push(sp ,556);
    push(sp ,516);
    pop(sp);
    pop(sp);
    show(sp);
    int at_index_fromtop = peek(sp , 4);
    cout<<"The number at the top is : "<<at_index_fromtop<<endl;
    return 0;
}