class Solution {
public:
vector<vector<int>> result;

void combo(vector<int>& candidates, int target, int i,
           vector<int>& res, int sum)
{
    if(sum == target)
    {
        result.push_back(res);
        return;
    }

    if(i == candidates.size() || sum > target)
        return;

    // Take candidates[i]
    res.push_back(candidates[i]);

    // i stays same because we can reuse the element
    // we can take same element many times that why dont increment i
    // we put there base condtion sum>target return
    combo(candidates, target, i, res,
          sum + candidates[i]);

    // Undo
    res.pop_back();

    // Don't take candidates[i]
    combo(candidates, target, i + 1, res, sum);
}


vector<vector<int>> combinationSum(vector<int>& candidates, int target)
{
    result.clear();

    vector<int> res;

    combo(candidates, target, 0, res, 0);

    return result;
}
};