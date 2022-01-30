#include <iostream>
#include <vector>
#include <bits/stdc++.h>
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

void PrintPreorder(TreeNode* root)
{
    if(root == NULL)
        return;
    
    cout<<"root-> data"<<root->val<<endl;
    PrintPreorder(root-> left);
    PrintPreorder(root-> right);
    
}
void PrintInorder(TreeNode* root)
{
    if(root == NULL)
        return;
    
    PrintInorder(root-> left);
    cout<<"root-> data"<<root->val<<endl;
    PrintInorder(root-> right);
      
    
}

  int pIndex ;

TreeNode* ConstructTree(int st, int end, vector<int> &A, unordered_map <int , int > &Map)
{
      //cout<<"st "<<st<<endl;
        //        cout<<"end "<<end<<endl;
       
     if (st >end)
        return NULL;
    int curr = A[pIndex++];
    TreeNode *root = newNode(curr);
    int index = Map[root->val];
    if (st ==end)
        return root;
    
    root-> left = ConstructTree(st, index-1, A, Map);
    root-> right = ConstructTree(index+1, end, A, Map);
    return root;
}

TreeNode* buildTree(vector<int> &A, vector<int> &B) 
{
    pIndex =0;
    int n =B.size();
    unordered_map <int , int > Map;
    for (int i =0;i<n;i++)
    {
        Map[B[i]] =i;
    }
    return ConstructTree(0, n-1, A, Map);
    
}



int main ()
{
 
   vector<int>A = {10 ,5 ,4 ,6 ,100 ,20 ,120};
   vector<int>B  = { 4 ,5 ,6 ,10 ,20 ,100 ,120  };
    
    // vector<int>A = { 1, 2, 3, 4, 5 };
    //vector<int>B  = { 3, 2, 4, 1, 5 };
   
   TreeNode* root=buildTree(A, B);
   PrintPreorder(root);
   cout<<"sssssssssddddddddddddddddddddd"<<endl;
   PrintInorder(root);
  return 0;
}
