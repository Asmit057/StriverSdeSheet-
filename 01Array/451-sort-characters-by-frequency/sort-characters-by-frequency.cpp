class Solution {
public:
    static bool cmp(pair<char,int> a, pair<char,int> b)
    {
        return a.second>b.second;
    }
    string frequencySort(string s) {
      string ans = "";
      unordered_map<char,int> mp;
      int n = s.size();
      int count=0;
      for(int i=0; i<n; i++)
      {
        mp[s[i]]++;
        count++;
      }
      vector<pair<char,int>> v;
      for( auto it : mp)
      {
        v.push_back(it);
      }
      sort(v.begin(),v.end(),cmp);
      int vsize = v.size();
      for(int i=0; i<vsize; i++)
      {
        for(int j=0; j<v[i].second; j++)
        {
            ans += v[i].first;
        }
      }
      return ans;
     }
};