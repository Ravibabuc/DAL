int largestRectangleArea(vector<int> &A) 
{
    int n = A.size();
    int ans=INT_MIN;
    stack<int> St ;
    int tp=0;
    int i =0;
     while (i<n)
     {
            if (St.empty() || (A[St.top()] <= A[i]))
            {
                St.push(i++);
            }
            else
            {
                tp=St.top();
                St.pop();
                ans = max(ans, A[tp] * (St.empty() ? i : i-St.top()-1)  );
            }
        
     }
     
     
     while (!St.empty())
     {
            
                tp=St.top();
                St.pop();
                ans = max(ans, A[tp] * (St.empty() ? i : i-St.top()-1)  );
            
        
     }
    
    return ans;
}
