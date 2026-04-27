class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        
        for(int i=0; i<nums.size(); i++)
        {
            st.insert(nums[i]);
        }
    
        int mCount = 0;
        // iterate only or move count only if the x is the start of the sequence
        for(int x : st )
        {
            int count=1;
           if(st.find(x-1)==st.end()){
            while(st.find(x+1)!=st.end())
            {
                count++;
                x++;
            }
           }
        mCount = max(count,mCount);
        }
            

        return mCount;
        }
};