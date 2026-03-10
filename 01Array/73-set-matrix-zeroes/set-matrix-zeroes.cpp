class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

     int col = matrix[0].size();
int row = matrix.size();
int coltr = 1;

for(int i = 0; i < row; i++)
{
    for(int j = 0; j < col; j++)
    {
        if(matrix[i][j] == 0)
        {
            if(j == 0)
            {
                coltr = 0;
            }
            else
            {
                matrix[0][j] = 0;
                matrix[i][0] = 0;
            }
        }
    }
}

for(int i = row-1; i >= 0; i--)
{
    for(int j = col-1; j >= 0; j--)
    {
        if(j != 0)
        {
            if(matrix[0][j] == 0 || matrix[i][0] == 0)
            {
                matrix[i][j] = 0;
            }
        }
        else if(coltr == 0)
        {
            matrix[i][0] = 0;
        }
    }
}
    }
};