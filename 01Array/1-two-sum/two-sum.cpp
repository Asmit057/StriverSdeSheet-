class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // as we have to return the index so we cant sort
        vector<int> result;
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++)
        {
              
            if(mp.find(target - nums[i])!=mp.end())
            {
                result.push_back(mp[target-nums[i]]);
                result.push_back(i);
                break;
            }
          mp[nums[i]] =i;
        }
        return result;
    }
};