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


void RightView(TreeNode* root, int &last_level , int level,vector<int> &ans) 
{
    vector<int> B;
    //cout<<"hello1 "<<endl;
    if (root ==NULL)
    {
        return ;
    }
    //cout<< root->val <<" ,";
     if(last_level < level)
     {
         //cout<<"root->val "<<root->val<<endl;
      ans.push_back(root->val);   
      last_level = level;
     } 
    
    RightView(root-> right,last_level, level+1, ans);
    
    RightView(root->left,last_level, level+1, ans);
}


vector<int>  solve(TreeNode* A) 
{
    int last_level=0;
    vector<int>  ans;
    RightView(A, last_level, 1, ans);
   
     return ans;
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
    
    root->left->left->left = newNode(2);
    
     vector<int>  ans = solve(root);
    
    cout<<" final answer "<<endl;
    
        for(int i =0;i<ans.size();i++)
        {
           cout<<" " <<ans[i] ;
        }
        
  
  return 0;
}
