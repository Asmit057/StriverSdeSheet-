class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int extraCol0=1;
       int n= matrix.size();
       int m= matrix[0].size();
       for(int i=0; i<n; i++)
       {
        for(int j=0; j<m; j++)
        {
            if(matrix[i][j]==0)
            {
             matrix[i][0] =0;
             if(j!=0){
             matrix[0][j] =0;
             }
         else{
                extraCol0=0;
            }
            }

        }
       } 
     for(int i = n-1; i >= 0; i--)
{
    for(int j = m-1; j >= 0; j--)
    {
        if(j != 0)
        {
            if(matrix[0][j] == 0 || matrix[i][0] == 0)
            {
                matrix[i][j] = 0;
            }
        }
        else if(extraCol0 == 0)
        {
            matrix[i][0] = 0;
        }
    }
}
    }
};