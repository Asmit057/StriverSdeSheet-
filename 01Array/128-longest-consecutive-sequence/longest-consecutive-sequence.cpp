class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
   unordered_set<int> s;
    int length = 1;
    int mex = 0;
    for(int i=0; i<nums.size(); i++){
      s.insert(nums[i]);
    }
    int n = s.size();
 for(int x : s)
 {
    
    if(s.find(x-1)!=s.end())
    {
     continue;
    }
    else{
        int num = x;
        while(s.find(num+1)!=s.end())
        {
            length++;
            num++;
        }
        mex = max(length,mex);
        length=1;
    }
 }
    return mex;
}
    
};