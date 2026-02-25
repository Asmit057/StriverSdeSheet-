class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start=0;
        int end = nums.size()-1;
        while(start<end)
        {
            if(nums[start]==0)
            {
                int j= start;
                while(j<end)
                {
                    
                    nums[j]=nums[j+1];
                    j++;
                }
                nums[end] = 0;
                end--;
                
            }
            else{
            start++;
            }
        }
    }
};