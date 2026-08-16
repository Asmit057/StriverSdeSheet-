class Solution {
public:
   vector<vector<int>> result;

    void generate(vector<int>& candidates,
                  int target,
                  int start,
                  vector<int>& v)
    {
        // Target achieved
        if (target == 0)
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
            generate(candidates, target - candidates[i], i + 1, v);

            // BACKTRACK
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<int> v;

        generate(candidates, target, 0, v);

        return result;
    }
};