class Solution {
public:
    vector<vector<int>> result;
    void generate(vector<int>& candidates, int target,int n, int sum, vector<int> v )
    {
       if (sum > target)
        return;

    if (n == 0)
    {
        if (sum == target)
            result.push_back(v);
        return;
    }

    // Include current element
    v.push_back(candidates[n - 1]);

    generate(candidates, target, n - 1,
             sum + candidates[n - 1], v);

    v.pop_back();

    // Exclude current element
    // If next element is same, skip all duplicates
    int i = n - 1;

    while (i > 0 && candidates[i] == candidates[i - 1])
        i--;

    generate(candidates, target, i, sum, v);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> v;
       sort(candidates.begin(),candidates.end());
        generate(candidates,target,n,0,v);
       return result;
    }
};