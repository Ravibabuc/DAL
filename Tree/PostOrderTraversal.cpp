#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int Data;
    TreeNode *left;
    TreeNode *right;
};

TreeNode* newNode(int data)
{
    TreeNode * newNode= new TreeNode;
    newNode ->left = NULL;
    newNode ->right = NULL;
    newNode -> Data=data;
    return newNode;
}

void PrintPostorder(TreeNode* root)
{
    if(root == NULL)
        return;
    
    PrintPostorder(root-> left);
  
    PrintPostorder(root-> right);
      cout<<"root-> data"<<root->Data<<endl;
    
}

vector<int> postorderTraversal(TreeNode * A)
{
    vector<int> ans;
    if (A == NULL)
    {
        return ans;
    }
    stack<TreeNode *> St;
    St.push(A);
    stack<TreeNode *> Out;

    while(!St.empty() )
    {
       
        TreeNode *curr =St.top();
        St.pop();
        
        Out.push(curr);
        if(curr->left)
        {
            St.push(curr->left);
        }
        if (curr->right)
        {
            St.push(curr->right);
        }
        
        
    }
    while(!Out.empty() )
    {
        TreeNode *curr = Out.top();
        ans.push_back(curr->Data);
        Out.pop();
        
    }
    return ans;
}




int Height(TreeNode *root)
{
    if (root == NULL)
        return -1;
    
    
      int right = 1+ Height(root->left);
      int left=    1+ Height(root->right);
      return max(right, left);

}

int main ()
{
 

    TreeNode *root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(100);
    root->left->left = newNode(4);
    root->left->right = newNode(6);
    root->right->left = newNode(20);
   root->right->right = newNode(120);
   // root->right->right->right = newNode(125);
   vector<vector<int>> A;
   vector<int> ans =postorderTraversal(root);
   for(int i =0;i<ans.size();i++)
   {
       cout<<ans[i]<<" ";
   }
    cout<<endl;
  return 0;
}
