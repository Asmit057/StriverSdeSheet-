class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // swap matarix[i][j] with matrix[j][i]
        // then reverse the row
        int n = matrix.size();
        int m = matrix[0].size();
        int a=0;
int b=0;
for(int i=a; i<n; i++)
{
    for(int j= b; j<m; j++)
    {
        swap(matrix[i][j],matrix[j][i]);
    }
    a++, b++;
}

for(int i=0; i<n; i++)
{
    reverse(matrix[i].begin(),matrix[i].end());
}
    }
};