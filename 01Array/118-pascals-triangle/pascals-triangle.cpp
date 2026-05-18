class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i=0; i<numRows; i++)
        {
            vector<int> rowP;
            for(int j=0;j<=i; j++)
            {
          if(j==0 || j==i)
          {
            rowP.push_back(1);
          }
          else{
            int sum = result[i-1][j-1] + result[i-1][j];
            rowP.push_back(sum);
          }
            }
            result.push_back(rowP);
        }
        return result;
    }
};