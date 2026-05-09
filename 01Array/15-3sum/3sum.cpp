class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // key idea fix one element i and then move j and k acc. to i
        // tc. O(n2) bcz checking for every element.
          sort(nums.begin(), nums.end());

    vector<vector<int>> result;
    int n = nums.size();

    for(int i = 0; i < n; i++)
    {
        // skip duplicate i
        if(i > 0 && nums[i] == nums[i-1])
            continue;

        int j = i + 1;
        int k = n - 1;

        while(j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];

            if(sum == 0)
            {
                result.push_back({nums[i], nums[j], nums[k]});

                j++;
                k--;

                // skip duplicates
                while(j < k && nums[j] == nums[j-1])
                    j++;

                while(j < k && nums[k] == nums[k+1])
                    k--;
            }
            else if(sum > 0)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }

    return result;
        
    }
};