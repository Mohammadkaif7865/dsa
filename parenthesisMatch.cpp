#include <iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    char *arr;
};
int parenthesisMatch(char *exp)
{
    stack * sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = new char[sizeof(char) * sp->size];
    for (int i = 0; exp[i]!='\0'; i++)
    {
        if (exp[i]=='(')
        {
            push(sp , '(');
        }
        else if (exp[i]==')')
        {
            if(isEmpty(sp)){
                return 0;
            }
            else
            {
                pop(sp);
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
int push(stack * ptr, char data){
      if (isFull(ptr))
      {
         cout<<"Stack Overflow !!!!! "<<endl;
         return ptr->top;
      }
      else
      {
          ptr->top++;
          ptr->arr[ptr->top]=data;
      }
      return ptr->top;
}
int pop(stack * ptr){
      if (isEmpty(ptr))
      {
         cout<<"Stack UnderFlow !!!!! "<<endl;
         return ptr->top;
      }
      else
      {
          ptr->top--;   
      }
      return ptr->top;
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

int main()
{   
    char  exp[] = "1+(55+1)+(3))";
    if (parenthesisMatch(exp))      
    {
         cout<<"The parenthesis is matching "<<endl;
    }
    else
    {
        cout<<"The parenthesis is not matching "<<endl;
    }
    
    return 0;
}