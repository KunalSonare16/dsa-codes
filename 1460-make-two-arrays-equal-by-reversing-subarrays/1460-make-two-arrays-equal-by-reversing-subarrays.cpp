class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int freq[1001] = {};

        for (int x : target)
            freq[x]++;

        for (int x : arr)
            freq[x]--;

        for (int i = 1; i <= 1000; i++) {
            if (freq[i] != 0)
                return false;
        }

        return true;
    }
};