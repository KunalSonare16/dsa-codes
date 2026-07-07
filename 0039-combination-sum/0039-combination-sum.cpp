class Solution {
public:
 void solve( int index , vector<vector<int>> &ans , vector<int> &arr, int target , vector<int> &kk){
       if(target == 0 ){
           ans.push_back(kk);
           return;
       }
       if(index >= arr.size() || target<0) return;
     
           kk.push_back(arr[index]);
           solve(index,ans,arr,target-arr[index],kk);
           kk.pop_back();
           
           
         solve(index+1,ans,arr,target,kk);
       
   }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> ans;
      vector<int> kk;
      solve(0,ans,candidates,target,kk);
      
      return ans;
        
    }
};