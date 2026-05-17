class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top =0;
        int bottom = matrix.size()-1;
        int left = 0;
        int right = matrix[0].size()-1;
        vector<int>result;
        while(top<=bottom && left<=right)
        {
            //1. traverse from left to right then top++
            for(int i=left; i<=right; i++)
            {
                result.push_back(matrix[top][i]);
            }
            top++; // 1st row traversed
            //2. traverse last column from top to bottom 
            // and now u traverse the right end so right --
            for(int i=top; i<=bottom; i++)
            {
                result.push_back(matrix[i][right]);
            }
            right--;
            //3. now traverse from right to left
            // and bottom --
            if(top<=bottom){
            for(int i=right; i>=left; i--)
            {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            //4.now traverse from bottom to up
            // ans left ++ bcz that col traversed
            if(left<=right){
            for(int i=bottom ; i>=top; i--)
            {
                result.push_back(matrix[i][left]);
            }
            left++;
            }

        }
        return result;
    }
};