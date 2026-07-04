class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        // always do binary search on smaller array to prevent out of bound
        if (n > m)
        return findMedianSortedArrays(nums2, nums1);
        double result ;
        int low = 0;
        int tlength = (n+m);
        int lefthalf = 0;
        int righthalf = 0;
        if(tlength%2 ==0)
        {
            lefthalf = tlength/2;
        }
        else{
            lefthalf  = (tlength+1)/2;
        }
        righthalf = tlength - lefthalf;
        int high = n;
         while(low<=high)
         {
            int mid1 = (low+high)/2; // total elements of arr1 in right half
            int n2 = lefthalf - mid1; // total elements of arr2 in right half
            // so if mid1 is greater than left half 1st elment of arr2 
            // then we reduce the length of arr1 or reject the mid to high
           int l1 = (mid1==0)?INT_MIN:nums1[mid1-1];
           int r1 = (mid1==n)?INT_MAX:nums1[mid1];

            int l2 = (n2==0)?INT_MIN:nums2[n2-1];
           int r2 = (n2==m)?INT_MAX:nums2[n2];
            if(l1 > r2)
            {
                high = mid1-1;
            }
            else if(l2>r1)
            {
                low = mid1+1;
            }
            else{
                if(tlength%2==0)
                {
                    result = (max(l1,l2)+min(r1,r2))/2.0;
                }
                else{
                    result = max(l1,l2);
                }
                return result;
            }

         }
         return result;
    }
};