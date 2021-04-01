#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node *createnode(int data) //for creation of new node
{
    node *n = new node[sizeof(node)];
    n->data = data; //setting the data
    n->left = NULL; //setting the left right children
    n->right = NULL;
    return n;
}
int main()
{
    // node *p1 = new node[sizeof(node)];
    // node *p2 = new node[sizeof(node)];
    // node *p3 = new node[sizeof(node)];
    // p1->left = p2;
    // p1->right = p3;
    // p1->data = 324;
    // p2->left = NULL;
    // p2->right = NULL;
    // p3->left = NULL;
    // p3->right = NULL;
    node *p = createnode(34);
    node *p1 = createnode(5435);
    node *p2 = createnode(352);

    return 0;
}