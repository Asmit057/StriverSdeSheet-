class Solution {
public:
    int merge(vector<int>& nums, int low , int high)
    {
        int count = 0;
        int mid = (low + high) / 2;
        int n = nums.size();
        int n1 = mid - low + 1;
        int n2 = high - mid;
        vector<int> nums1(n1);
        vector<int> nums2(n2);
    // count before merging the two array bcz both the
    // array are sorted
    // see wherever if the array are sorted try to use
    // the two pointer approach
    int a = mid+1;
    for(int i=low; i<=mid; i++)
    {
    while(a<=high && nums[i]>2LL*nums[a])
    {
        a++;
    }
    count += a - (mid+1);
    }
        // Copy left half
        for(int i = 0; i < n1; i++)
        {
            nums1[i] = nums[low + i];
        }

        // Copy right half
        for(int i = 0; i < n2; i++)
        {
            nums2[i] = nums[mid + 1 + i];
        }

        vector<int> nums3;

        int i = 0;
        int j = 0;
        int k = 0;

        // KEEPING YOUR BLOCK SAME
        while(i<n1 && j<n2)
        {
            if(nums1[i]<= nums2[j])
            {
                nums3.push_back(nums1[i]);
                i++;
                k++;
            }
            else{
               
                nums3.push_back(nums2[j]);
                k++;
                j++;
            }
        }

        // Remaining left
        while(i < n1)
        {
            nums3.push_back(nums1[i]);
            i++;
        }

        // Remaining right
        while(j < n2)
        {
            nums3.push_back(nums2[j]);
            j++;
        }

        // Copy back to original array
        for(int x = low; x <= high; x++)
        {
            nums[x] = nums3[x - low];
        }

        return count;
    }

    int mergeSort(vector<int>& nums, int low , int high)
    {
        int count = 0;

        if(low < high)
        {
            int mid = (low + high) / 2;

            count += mergeSort(nums, low, mid);

            count += mergeSort(nums, mid + 1, high);

            count += merge(nums, low, high);
        }

        return count;
    }

    int reversePairs(vector<int>& nums)
    {
        int n = nums.size();

        return mergeSort(nums, 0, n - 1);
    }
};