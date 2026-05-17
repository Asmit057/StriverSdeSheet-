class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        // first set the row and col to 0
        // intially if any element in 0th col is 0 then we
        //  mark col0 as 0
        int col0 = 1;
        int row = nums.size();
        int col = nums[0].size();
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(nums[i][j]==0)
                {
                    if(j!=0){
                    nums[i][0] =0;
                    nums[0][j] =0;
                    }
                    else{
                        col0 = 0;
                    }
                }
            }
        }
        // now making the matrix =0;
        for(int i=row-1; i>=0; i--)
        {
            for(int j=col-1; j>=0; j--)
            {
                if((nums[0][j]==0 || nums[i][0]==0) && (j!=0))
                {
                    nums[i][j] = 0;
                }
                else if(j==0){
                if(col0 == 0)
                {
                    nums[i][j] =0;
                }
                }
            }
        }

    }
};