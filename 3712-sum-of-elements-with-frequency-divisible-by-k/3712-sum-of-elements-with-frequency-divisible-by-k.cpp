class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        map<int,int> f;
        for(int i =0 ; i < nums.size() ;i++){
            f[nums[i]]++;
        }
        int sum = 0;
        for(auto n : f){
            int d = n.first;
            int s = n.second;
            if(s % k == 0){
                sum += d * s;
            }
        }
        return sum;
        
    }
};