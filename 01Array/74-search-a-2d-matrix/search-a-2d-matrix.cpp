class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
         int lowr = 0;
         int highr = row-1;
         int lowc = 0;
         int highc = col-1;
         while(lowr<=highr)
         {
            int midr = (lowr+highr)/2;
            if(matrix[midr][0] == target)
            {
                return true;
            }
            else if(matrix[midr][0] > target)
            {
                highr = midr-1;
            }
            else{
                if(matrix[midr][col-1]>=target)
                {
                    while(lowc<=highc){
                    int midc = (lowc+highc)/2;
                    cout<<" mid c is "<<midc<<endl;
                    if(matrix[midr][midc]== target)
                    {
                        return true;
                    }
                    else if(matrix[midr][midc]< target)
                    {
                        lowc = midc+1;
                    }
                    else{
                        highc = midc-1;
                    }
                    }
                }
                lowr = midr+1;

            }
         }
         return false;
    }
};