#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <map>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* newNode(int data)
{
    TreeNode * newNode= new TreeNode(0);
    newNode ->left = NULL;
    newNode ->right = NULL;
    newNode -> val=data;
    return newNode;
}


int height(TreeNode *root)
{
    
    if(root == NULL)
        return -1;
   cout<<"root ->val"<<root->val<<endl; 
  return 1+ max(height(root->left), height(root->right)) ;
}



int isBalanced(TreeNode* A) 
{
    if(A == NULL)
        return 1;
    
    cout<<"hello1"<<endl;
    int LH = height(A->left);
    int RH = height(A->right);
    cout<<"LH ="<<LH<<endl;
    cout<<"RH ="<<RH<<endl;
    cout<<"hello2"<<endl;
  // if((abs(LH -RH)<= 1) && isBalanced(A->left) && isBalanced(A->right))
   if((abs(LH -RH)<= 1))
   {
       cout<<"Balance"<<endl;
           return 1;
   }

    return -1;
}


int main ()
{


    TreeNode *root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(100);
    //root->left->left = newNode(4);
    //root->left->right = newNode(6);
    root->right->left = newNode(20);
    root->right->right = newNode(120);
    root->right->right->right = newNode(130);
    //root->right->right->right->right = newNode(135);
    
    //root->left->left->left = newNode(2);
    
    // vector<int>  ans = solve(root);
    
   // cout<<" final answer "<<endl;
    
      //  for(int i =0;i<ans.size();i++)
      //  {
       //    cout<<" " <<ans[i] ;
      //  }
    int ans = isBalanced(root) ;
    cout<<"ans ="<<ans<<endl;
  
  return 0;
}
