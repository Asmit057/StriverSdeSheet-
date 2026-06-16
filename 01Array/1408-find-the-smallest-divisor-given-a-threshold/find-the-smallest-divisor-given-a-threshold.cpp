class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high = INT_MIN;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            high = max(high,nums[i]);
        }
        int result =INT_MIN;
        while(low<=high)
        {
            int count=0;
            int mid = (low+high)/2;
            for(int i=0; i<n; i++)
            {
                count += (nums[i]+mid-1)/mid;
               
            }
            cout<<endl;
            if(count>threshold)
            {
                low = mid+1;
            }
            else{
                result = mid;
                high = mid-1;
            }
        }
        return result;
    }
};