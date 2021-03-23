#include<iostream>
using namespace std;
struct circularqueue{
    int size;
    int f;
    int r;
    int * arr;
};
int isFull(circularqueue * q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    return 0;
}
int isEmpty(circularqueue * q){
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(circularqueue * q, int val){
    if(isFull(q)){
        cout<<"The queue is full "<<endl;
    }   
    else
    {
        q->r = (q->r+1)%q->size;
        q->arr[q->r] = val;
        cout<<"Enqueued successfully !!! "<<val<<endl;
    }
      
}
int dequeue(circularqueue* q){
    int a = -1;
    if (isEmpty(q))
    {
      cout<<"The queue is Empty "<<endl;  
    }
    else
    {
         q->f = (q->f +1)%q->size;
         a = q->arr[q->f];
    }
    return a;
}
int main(){
    circularqueue * q;
    q = new circularqueue[sizeof(circularqueue)];
    q->size = 4;
    q->f = -1;
    q->r = -1;
    q->arr = new int[q->size]; 
    enqueue(q,12);
    enqueue(q,43); 
    enqueue(q,3); 
    enqueue(q,40); 
    cout<<"Dequeuing Element "<<dequeue(q)<<endl;
    cout<<"Dequeuing Element "<<dequeue(q)<<endl;
    cout<<"Dequeuing Element "<<dequeue(q)<<endl;
    cout<<"Dequeuing Element "<<dequeue(q)<<endl;
    enqueue(q,48); 
    enqueue(q,47); 
    return 0;
}