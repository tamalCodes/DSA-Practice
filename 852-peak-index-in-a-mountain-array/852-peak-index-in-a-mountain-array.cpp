class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 1;
        int e = arr.size()-2;
        
        int mid = s + (e-s)/2;
        
        while(s<=e){
            if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]) s= mid+1;
            else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]) e=mid-1;
            else return mid;
            
            mid = s + (e-s)/2;
        }
        return 0;
    }
};