class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         int f=-1,l=-1;
        int si=0, ei=nums.size()-1;
        
		// For finding the first element index
        while(si <= ei) {
            
            int mid = (si+ei)/2;
            if(nums[mid] == target) {
                f = mid;
                ei = mid-1;
            } else if(nums[mid] < target) si = mid+1;
            else ei = mid-1;
        }
		
        //for finding the last element index
        si=0, ei=nums.size()-1;
        while(si <= ei) {
            
            int mid = (si+ei)/2;
            if(nums[mid] == target) {
                l = mid;
                si = mid+1;
            } else if(nums[mid] > target) ei = mid-1;
            else si = mid+1;
        }
        
        return {f, l};    
    }
};