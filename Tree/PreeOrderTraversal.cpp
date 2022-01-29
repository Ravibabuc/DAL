#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int Data;
    Node *left;
    Node *right;
};

Node* newNode(int data)
{
    Node * newNode= new Node;
    newNode ->left = NULL;
    newNode ->right = NULL;
    newNode -> Data=data;
    return newNode;
}

void PrintPreorderIter(Node* root)
{
    if(root == NULL)
        return;
    cout<<"root-> data"<<root->Data<<endl;
    PrintPreorderIter(root-> left);
    PrintPreorderIter(root-> right);
    
}

void PrintPreorderIter1(Node * root)
{

    if (root == NULL)
    {
        return;
    }
    stack<Node *> St;
    St.push(root);
    
    
    while(!St.empty())
    {
        Node *curr = St.top();
        St.pop();
        
        cout<<curr->Data<<" "<<endl;
        
        if(curr->right)
            St.push(curr->right);
        if(curr->left)
            St.push(curr->left);
       // cout<<"hello "<<curr->right->Data<<endl;
        
    }
    
}




int Height(Node *root)
{
    if (root == NULL)
        return -1;
    
    
      int right = 1+ Height(root->left);
      int left=    1+ Height(root->right);
      return max(right, left);

}

int main ()
{
 

    Node *root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(100);
    root->left->left = newNode(4);
    root->left->right = newNode(6);
    root->right->left = newNode(20);
   root->right->right = newNode(120);
   // root->right->right->right = newNode(125);
   vector<vector<int>> A;
   PrintPreorderIter1(root);

  return 0;
}
