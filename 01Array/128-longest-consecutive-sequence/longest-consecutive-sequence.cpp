class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
   unordered_set<int> s(nums.begin(), nums.end());
    int longest = 0;

    for(int x : s)
    {
        // check if x is start of sequence
        if(s.find(x - 1) == s.end())
        {
            int num = x;
            int length = 1;

            while(s.find(num + 1) != s.end())
            {
                num++;
                length++;
            }

            longest = max(longest, length);
        }
    }

    return longest;
}
    
};