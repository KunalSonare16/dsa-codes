class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for( int i=0; i<s.length(); i++){
          mp[s[i]]++;
        }

        priority_queue<pair<int,char>> q;
        for( auto i : mp){
            char j = i.first;
            int k = i.second;
            q.push({k,j});
        }
        
        string st = "";
        while(!q.empty()){
            
            int count = q.top().first;
            while( count--){
               st.push_back(q.top().second);
            }
              q.pop();
        }

        return st;
    }
};