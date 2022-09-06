class Solution {
    public int findInMountainArray(int target, MountainArray mountainArr) {
        int len = mountainArr.length(), start = 0, end = len - 1, mid = start + (end - start) / 2;
        
        while (start < end)
        {
            mid = start + (end - start) / 2;
            
            if (mountainArr.get(mid) < mountainArr.get(mid + 1))
                start = mid + 1;
            else
                end = mid;
        }
        
        if (target == mountainArr.get(mid))
            return mid;
        
        int leftPos = binarySearch(0, mid - 1, target, mountainArr, true);
        
        if (leftPos != -1)
            return leftPos;
        
        int rightPos = binarySearch(mid + 1, len - 1, target, mountainArr, false);
        
        return rightPos == -1 ? -1 : rightPos;
    }
    
    public int binarySearch(int start, int end, int target, MountainArray arr, boolean isAsc)
    {
        int mid = start + (end - start) / 2;
        
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            
            if (target == arr.get(mid))
                return mid;
            else if (target < arr.get(mid))
            {
                if (isAsc)
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            else
            {
                if (isAsc)
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
        
        return -1;
    }
}