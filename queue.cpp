#include<iostream>
using namespace std;
struct queue{
    int size;
    int f;
    int r;
    int * arr;
};
int isFull(queue * q){
    if(q->r == q->size - 1){
        return 1;
    }
    return 0;
}
int isEmpty(queue * q){
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(queue * q, int val){
    if(isFull(q)){
        cout<<"The queue is full "<<endl;
    }   
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
      
}
int dequeue(queue * q){
    int a = -1;
    if (isEmpty(q))
    {
      cout<<"The queue is Empty "<<endl;  
    }
    else
    {
         q->f++;
         a = q->arr[q->f];
    }
    return a;
}
int main(){
    queue * q;
    q = new queue[sizeof(queue)];
    q->size = 4;
    q->f = -1;
    q->r = -1;
    q->arr = new int[q->size]; 
    enqueue(q, 12);
    enqueue(q,43); 
    enqueue(q,3); 
    enqueue(q,4); 
    cout<<"Dequeuing Element "<<dequeue(q)<<endl;
    cout<<"Dequeuing Element "<<dequeue(q)<<endl;
    cout<<"Dequeuing Element "<<dequeue(q)<<endl;
    cout<<"Dequeuing Element "<<dequeue(q)<<endl;
    if (isEmpty(q))
    {
       cout<<"The queue is empty "; 
    }else
    {
        cout<<"The queue is not empty ";
    }
    
    return 0;
}