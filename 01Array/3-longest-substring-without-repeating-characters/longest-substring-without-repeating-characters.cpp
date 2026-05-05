class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==1)
        {
            return 1;
        }
        else{
        unordered_map<char,int> mp;
       int result=0;
        int n = s.size();
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(mp.find(s[i])!=mp.end())
            {
            k= max(k,mp[s[i]]+1);
            }
             mp[s[i]] = i;
             result = max(result,i-k+1);

        }
        cout<<mp['a']<<"and k "<<k;
        return result;
        }
    }
};