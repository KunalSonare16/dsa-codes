class Solution {
public:
    int kn(vector<int>& satisfaction, int index ,int time, vector<vector<int>> &dpa){
        if(index == satisfaction.size()){
            return 0;
        }
        if(dpa[index][time] != -1){
            return dpa[index][time];
        }

        int include =  satisfaction[index] * (time) + kn(satisfaction,index+1,time+1,dpa);
        int exclude = kn(satisfaction,index+1,time,dpa);
        dpa[index][time] =  max(include,exclude);
        return dpa[index][time];
    }
    int maxSatisfaction(vector<int>& satisfaction) {
        vector<vector<int>> dpa(satisfaction.size(),vector<int>(satisfaction.size()+1,-1));
        sort(satisfaction.begin(), satisfaction.end());
        return kn(satisfaction,0,1,dpa);
    }
};