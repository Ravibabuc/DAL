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


void RightView(TreeNode* root,  int dist, int level, map<int, pair<int, int>> &map) 
{
    if (root ==NULL)
    {
        return ;
    }
    
    if (map.find(dist) == map.end() || level < map[dist].second)
    {
        map[dist] = { root->val, level };
    }
         

    
    RightView(root->left,dist-1, level+1, map);
    RightView(root-> right,dist+1, level+1, map);
    
    
}


vector<int>    solve(TreeNode* A) 
{
    int last_level=0;
    vector<int> ans1;    
   
    map<int, pair<int, int>> map;
    RightView(A,0,  0, map);
     for (auto it: map) {
       // cout << it.second.first << " ";
        ans1.push_back(it.second.first);
    }

   //for(int i =0;i<ans.size();i++)
     //  {
        //   for(int j =0;j<ans[i].size();j++)
         //   {
                //ans1.push_back(ans[i][j]) ;
           //     
            //}
       // }
    return ans1;
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
    
    vector<int>    ans =     solve(root);
    
    cout<<" final answer "<<endl;
    
     //for(int i =0;i<ans.size();i++)
       // {
           for(int j =0;j<ans.size();j++)
            {
               cout<<" " <<ans[j] ;
          }
        //}
        
  
  return 0;
}
