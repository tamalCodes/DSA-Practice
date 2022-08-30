class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=0,count=0,t=101;
    
    for(int i=0;i<nums.size();i++)
    {
        
        
       if(nums[i]!=t)
       {
           t = nums[i]; //1
           count+=1; //2
       }else
       {
           nums[i]=101;
       }
        
      
            
    }
        sort(nums.begin(), nums.end());
        return count;
        
    }
};

// brute force 1 : since this is a sorted array what we can do is, we will keep checking for similar elements 