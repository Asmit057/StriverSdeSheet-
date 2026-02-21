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
    // or

//     for(int i = 0; i < nums.size(); i++)
// {
//     if(nums[i] == 0)
//     {
//         mexcount = max(mexcount, count);  // update before reset
//         count = 0;
//     }
//     else
//     {
//         count++;
//     }
// }

// // Final check (important if array doesn’t end with 0)
// mexcount = max(mexcount, count);
};