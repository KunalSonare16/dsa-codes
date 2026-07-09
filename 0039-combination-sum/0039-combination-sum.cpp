class Solution {
public:
    void solve(int index, vector<vector<int>> &ans, vector<int> &arr, int target, vector<int> &kk) {
        if (target == 0) {
            ans.push_back(kk);
            return;
        }

        if (index >= arr.size() || target < 0)
            return;

        for (int i = index; i < arr.size(); i++) {
            kk.push_back(arr[i]);
            solve(i, ans, arr, target - arr[i], kk); 
            kk.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> kk;

        solve(0, ans, candidates, target, kk);

        return ans;
    }
};