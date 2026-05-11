class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low =0;
        int mid =0;
        int high = nums.size()-1;
        // we are moving only mid , we are keeping low on side
        // and high one side
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                low++;
                mid++;
                // increase the window of low
        }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
               // mid++;
                high--;
            }
        }
    }
};