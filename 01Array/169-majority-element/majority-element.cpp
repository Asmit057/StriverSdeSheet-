class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // 
        int count=0;
        int result=-1;
        int cand = nums[0];
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]== cand)
            {
                count++;
            }
            else{
                count--;
            }
            if(count<0)
            {
                cand = nums[i];
               count =0;
            }
        }
        int c1=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==cand)
            {
          c1++;
            }
        }
        if(c1>=(nums.size()/2))
        {
            result =  cand;
        }
         return result;
    }
};