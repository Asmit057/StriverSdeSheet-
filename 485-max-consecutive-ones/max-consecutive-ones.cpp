class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int mexcount=0;
        for(int i=0; i<nums.size();i++)
        {
               
        if(count>mexcount)
            {
                mexcount = count;
            }
          if(nums[i]==0)
          {
           
            count=0;
            continue;
          }
         count++; 
      
        }
        mexcount = max(mexcount,count);
        return mexcount;
    }
};