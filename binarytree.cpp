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
void preorder(node* root){
    if (root!=NULL)
    {
       cout<<root->data<<" ";
       preorder(root->left);
       preorder(root->right);
    }

    
}
void postorder(node* root){
    if (root!=NULL)
    {
       postorder(root->left);
       postorder(root->right);
       cout<<root->data<<" ";
    }    
}
void inorder(node* root){
    if (root!=NULL)
    {
       inorder(root->left);
       cout<<root->data<<" ";
       inorder(root->right);
    }    
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
    /*
               p(4)
             /   \
         p1(1)    p2(6)
          /   \      
       p3(5)  p4(2) 
    */
    node *p = createnode(4);
    node *p1 = createnode(1);
    node *p2 = createnode(6);
    node *p3 = createnode(5);
    node *p4 = createnode(2);
    p->left = p1;
    p->right = p2;
    p2->left = NULL;
    p2->right = NULL;
    p1->left = p3;
    p1->right = p4;
    // p3->left = NULL;
    // p3->right = NULL;
    // p4->left = NULL;
    // p4->right = NULL;
    cout<<"Preorder traversal"<<endl;
    preorder(p);
    cout<<endl<<"Postorder traversal"<<endl;
    postorder(p);
    cout<<endl<<"inorder traversal"<<endl;
    inorder(p);

    return 0;
}