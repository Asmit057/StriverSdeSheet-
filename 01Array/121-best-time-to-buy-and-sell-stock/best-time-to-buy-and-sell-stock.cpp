class Solution {
public:
    int maxProfit(vector<int>& nums) {
       // maintain one min variable and subtract from 
       // current element
       int men =INT_MAX;
       int result =0;
       for(int i=0; i<nums.size(); i++)
       {
        if(nums[i]<men)
        {
        men = nums[i];
        }
        result = max(result,nums[i]-men);
       } 
       return result;  
    }
};