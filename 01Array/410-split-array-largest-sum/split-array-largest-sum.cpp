class Solution {
public:
   bool feasible(vector<int>& nums, int k , int mid)
   {
    int count =1 ;
    int sum =0;
    int n= nums.size();
    for(int i=0; i<n; i++)
    {
        if(nums[i]>mid)
        {
            return false;
        }
        if(sum + nums[i]<= mid)
        {
            sum += nums[i];
        }
        else{
            sum = nums[i];
            count++;
        }
    }
    if(count <= k)
    {
        return true;
    }
    else{
        return false;
    }
   }
    int splitArray(vector<int>& nums, int k) {
        int low = INT_MIN;
        int high  =0;
        int n = nums.size();
        for(int i=0 ;i<n; i++)
        {
            low = max(low, nums[i]);
            high += nums[i];
        }
        int result = -1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            bool x =  feasible(nums,k,mid);
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