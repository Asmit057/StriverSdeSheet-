class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top =0;
        int left=0;
        int n = matrix.size();
        int m = matrix[0].size();
        int bottom = n-1;
        int right = m-1;
        vector<int> result;
        while(top<=bottom && left<=right)
        {
            // from left to right
            for(int i=left; i<=right; i++)
            {
         result.push_back(matrix[top][i]);
            }
          top++; // this row is traversed
            // now top to bottom
            for(int i=top;i<=bottom ; i++)
            {
                result.push_back(matrix[i][right]);
            }
            right--;
            // right to left
            if(top<=bottom){
            for(int i=right;i>=left ; i--)
            {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            // now from bottom to top
            if(left<=right){
            for(int i=bottom;i>=top ; i--)
            {
                result.push_back(matrix[i][left]);
            }
              left++;
            }
        }
        return result;
    }
};