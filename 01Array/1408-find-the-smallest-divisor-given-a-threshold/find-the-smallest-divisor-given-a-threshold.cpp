class Solution {
public:
    bool feasible(vector<int>& nums, int threshold , int mid)
    {
        int count =0;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            count += ceil(nums[i]/double(mid));
        }
        cout<<"count is "<<count<<endl;
        if(count<=threshold)
        {
            return true;
        }
        else{
            return false;
        }
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = INT_MIN;
        int n = nums.size();
        int result = -1;
        for(int i =0; i<n; i++)
        {
            high = max(high, nums[i]);
        }
        while(low<=high)
        {
            int mid = (low+high)/2;
            bool x = feasible(nums, threshold , mid);
            cout<<"x is "<<x<<" mid is "<<mid<<endl;
            if(x)
            {
                result = mid;
                high  = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return result;
    }
};