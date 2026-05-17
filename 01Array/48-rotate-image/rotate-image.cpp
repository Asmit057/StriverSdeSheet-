class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    // first change rows to column and column to rows(transpose)
    // so swap diagonallly and reverse
    // for swapping diagonally j start from k and after iteration 
    // for j is over then increment k 
    int k=0;
    int row = matrix.size();
    int col = matrix[0].size();

    for(int i=0; i<row ; i++)
    {
        for(int j=k; j<col; j++)
        {
         swap(matrix[i][j],matrix[j][i]);
        }
        k++;
    }

    // now after taking the transpose reverse the array
    for(int i=0; i<row; i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
    }
};