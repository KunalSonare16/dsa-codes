class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int> degree(edges.size()+2,0);

        for(auto &i : edges){
            int k = i[0];
            int n = i[1];
            degree[k]++;
            degree[n]++;
        }
        int maxi = - 1;
        int maxiindex = 0;

        for(int i = 0 ; i < degree.size();i++){

            if(maxi<degree[i]){
                maxi = degree[i];
                maxiindex = i;
            }
        }
    return maxiindex;
    }
};