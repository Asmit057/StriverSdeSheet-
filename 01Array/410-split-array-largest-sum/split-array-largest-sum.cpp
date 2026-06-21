class Solution {
public:
//Binary search relies on this property:

//If mid is feasible, try a smaller mid (move left).
// if mid is not feasible, try a larger mid (move right).
//  mid is the maximum allowed sum of any subarray.

// "Can I split the array so that every subarray has sum ≤ mid, using at most k subarrays?"

// If the answer is yes, then mid is feasible.

    bool feasible(vector<int>& nums,int mid , int k)
    {
        int sum =0;
        int countsub = 1;
        int n = nums.size();
        for(int i =0; i<n; i++)
        {
            if(sum + nums[i]<= mid)
            {
                sum += nums[i];
            }
            else{
                countsub++;
                sum = nums[i];
            }
        }
    if(countsub<=k)
     {
        return true;
    }
       
        return false;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int low  = INT_MIN;
        int high =0;
        int result = -1;
        for(int i=0; i<n; i++)
        {
      high += nums[i];
      low  = max(low, nums[i]);
        }
        while(low<=high)
        {
        int mid = (low+high)/2;
        bool x = feasible(nums, mid,k);
        if(x)
        {
            result = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
        }
        return result;
    }
};