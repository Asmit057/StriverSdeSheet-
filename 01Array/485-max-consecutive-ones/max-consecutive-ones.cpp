class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
   int mexone = 0;
       int currmax = 0;
       int n = nums.size();
       for(int i=0; i<n; i++)
       {
        if(nums[i]==0)
        {
         mexone = max(mexone,currmax);
           currmax=0;
        }
        else{
           currmax++;
        }
       } 
       mexone = max(mexone,currmax);
       return mexone;
    }
};