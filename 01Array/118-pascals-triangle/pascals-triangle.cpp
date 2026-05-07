class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;

    for(int i=0; i<numRows;i++)
    { 
        vector<int> row(i+1);
        for(int j=0; j<=i;j++)
        {
            if(j==0)
            {
                row[j] =1;
            }
            else{
            row[j] = (row[j-1]*(i-j+1))/j;
            }
        }
       // pascal[i] = row;  and pascal(5);
        pascal.push_back(row);
    }
    return pascal;
    }
};