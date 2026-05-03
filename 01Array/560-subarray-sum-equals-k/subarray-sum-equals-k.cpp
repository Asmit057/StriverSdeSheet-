class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int result=0;
       unordered_map<int,int> mp;
       int psum = 0;
       mp[0]=1;
       for(int i=0;i<nums.size(); i++)
       {
        psum += nums[i];
       if(mp.find(psum-k)!=mp.end())
        {
            result += mp[psum-k];
             
        }
        mp[psum]++;
       }
       return result; 
    }
};