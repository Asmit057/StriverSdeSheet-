class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low =0;
        int n = arr.size();
        int high = n-1;
        // First position where missing ≥ 5 is index 4.
        // We need the first index where missing >= k.
        while(low<=high)
        {
            int mid = (low+high)/2;
            int x = arr[mid] - (mid+1);
            if(x>=k)
            {
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low+k;
    }
};