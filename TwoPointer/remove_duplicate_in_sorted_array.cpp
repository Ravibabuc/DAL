class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n=nums.size();
   
    int cnt =0;
    vector<int>temp;
    temp.push_back(nums[0]);
    for (int i =1;i<n;i++)
    {

        if(nums[i-1] != nums[i])
        {
            
            temp.push_back(nums[i]);
            
        }
        nums.resize(temp.size());
        for(int i=0;i<temp.size();i++)
        {
            nums[i]= temp[i];
        }
       
    }
    
     return temp.size();
    }
};
