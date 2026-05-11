class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result=0;
        int result1=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==1)
            {
                result1++;
            }
            else{
                result = max(result,result1);
                result1=0;
            }
        }
        result = max(result,result1);
        return result;
    }
};