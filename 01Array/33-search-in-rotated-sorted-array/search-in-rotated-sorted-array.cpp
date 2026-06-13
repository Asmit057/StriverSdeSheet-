class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low =0;
        int n = nums.size();
        int high = n-1;
        int result =-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(nums[mid]== target)
            {
                return mid;
            }
            // checking if this half is sorted
          if(nums[low]<=nums[mid] )
            {
          if(target>=nums[low] && target<=nums[mid])
          {
            high = mid-1;
          }
          else{
            low = mid+1;
          }
            }
            // checking if 2nd half sorted
          else{
      if(target>=nums[mid] && target<=nums[high])
          {
            low = mid+1;
          }
          else{
            high = mid-1;
          }
          }

        }
        return result;
    }
};