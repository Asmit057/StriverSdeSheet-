class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map <int, int> mp; 
       vector<int> v;
      for(int i=0; i<nums.size();i++)
      {
          int sum = target - nums[i];
    if (mp.find(sum) != mp.end()) {
        v.push_back(mp[sum]);
        v.push_back(i);
        return v;
    }
              // Insert
    mp[nums[i]]  = i;
 // think why we use at last
      }
      return v;
    }
};