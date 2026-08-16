class Solution {
public:
     vector<vector<int>> result;

    void generate(vector<int>& candidates,
                  int target,
                  int start,
                  vector<int>& v,int k)
    {
        // Target achieved
        if (v.size()==k && target==0)
        {
            result.push_back(v);
            return;
        }

        // Try every possible choice
        for (int i = start; i < candidates.size(); i++)
        {
            // Skip duplicate choices at the SAME level
            if (i > start && candidates[i] == candidates[i - 1])
                continue;

            // Since array is sorted
            if (candidates[i] > target)
                break;

            // TAKE
            v.push_back(candidates[i]);

            // Move to i + 1 because each element
            // can be used only once
            generate(candidates, target - candidates[i], i + 1, v,k);

            // BACKTRACK
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
         
        vector<int> v;
        vector<int> candidates(9);
        for(int i=1; i<=9; i++)
        {
            candidates[i-1] = i;
        }
        generate(candidates, n, 0, v,k);
        return result;
    }
};