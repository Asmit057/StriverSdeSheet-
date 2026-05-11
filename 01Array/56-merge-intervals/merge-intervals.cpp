class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      vector<vector<int>> result;
     sort(intervals.begin(),intervals.end());
    int inTime = intervals[0][0];
    int outTime = intervals[0][1];
for(int i = 1; i < intervals.size(); i++)
{
    // cout<<"intime "<<inTime<<endl;
    vector<int> res;
   if(intervals[i][0]<=outTime)
   {
    outTime = max(outTime,intervals[i][1]);
   }
   else{
  res.push_back(inTime);
  res.push_back(outTime);
  inTime = intervals[i][0];
  outTime = intervals[i][1];
  result.push_back(res);
   }
}
vector<int> last;
// cout<<"intimelast "<<inTime<<" outTime "<<outTime;
last.push_back(inTime);
last.push_back(outTime);
result.push_back(last);

return result;
    }
};