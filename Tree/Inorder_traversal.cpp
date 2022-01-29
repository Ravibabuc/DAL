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

void PrintInorder(Node* root)
{
    if(root == NULL)
        return;
    
    PrintInorder(root-> left);
    cout<<"root-> data"<<root->Data<<endl;
    PrintInorder(root-> right);
    
}

void PrintInorderIter(Node * root)
{

    if (root == NULL)
    {
        return;
    }
    stack<Node *> St;
   
    Node *curr = root;
    
    while(!St.empty() || curr != NULL)
    {
       
        if(curr != NULL)
        {
            if(curr)
                St.push(curr);
            curr=curr->left;
            
        }
        else
        {
           // cout<<"hello 1"<<endl;
            //cout<<"hello 2 "<<St.size()<<endl;
            curr = St.top();
           // if (curr == NULL)
           // {
           //     cout<<"hello 3"<<endl;
           // }
             
            cout<<curr->Data<<" ";
            St.pop();
            //if (curr->right)
               // St.push(curr->right);
            curr = curr->right;
            
        }
        
        
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
   PrintInorderIter(root);

  return 0;
}
