class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        vector<int> cp = arr;
        sort(cp.begin(), cp.end());
        unordered_map<int, int> mp;
        int rank = 1;
        for (int x : cp) {
            if (mp.find(x) == mp.end()) {
                mp[x] = rank++;
            }
        }
        for (int &x : arr) {
            x = mp[x];
        }
        return arr;
    }
};