class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // first find the element if just previous element is smaller 

        // then sort and then swap with next greater

        int x;
        int n = nums.size();
        int swapInd=0;
        for(int i=n-1; i>0; i--)
        {
            if(nums[i]>nums[i-1])
            {
                x = nums[i-1];
                swapInd = i;
                break;
            }
        }
        // means x is the element which is smaller than the next element
        // sort from i to n
        // now we have to find the element just greater than the x
        // and swap
        sort(nums.begin()+swapInd,nums.begin()+n);
        // now find the next greater element
        int nextGreater = INT_MIN;
        for(int j=swapInd; j<n; j++)
        {
            if(nums[j]>x)
            {
                swap(nums[j],nums[swapInd-1]);
                break;
            }
        }
        

    }
};