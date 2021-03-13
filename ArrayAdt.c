#include<stdio.h>//we are creating a array dynamically
#include<stdlib.h>
struct myArray  //User defined data type
{
    int total_size;
    int used_size;
    int *ptr;


};
void createArray(struct myArray * a, int tSize , int uSize){
    (*a).total_size = tSize;
    (*a).used_size = uSize;
    (*a).ptr = (int *) malloc(tSize * sizeof(int));// it is a way decalare a array in C.

}
void show(struct myArray *a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
    
}
void setVal(struct myArray *a){
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter the Elements %d ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
    
}

int main(){
    struct myArray marks;
    createArray(&marks, 100, 2);
    printf("Running the setVal funtion \n");
    setVal(&marks);
    printf("Running the getVal funtion \n");
    show(&marks);

    return 0;
}