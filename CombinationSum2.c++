class Solution {
public:
    void helper(int ind,int target,vector<int> & candidates,vector<int>&subset, vector<vector<int>>&ans){

      if(target==0){
         ans.push_back(subset);
         return;
      }
      for(int i=ind;i<candidates.size();i++){
        if(i> ind && candidates[i]==candidates[i-1]) continue;

        if(target>=candidates[i]){
            subset.push_back(candidates[i]);
            helper(i+1,target-candidates[i],candidates,subset,ans);
            subset.pop_back();
        }
      }


    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         sort(candidates.begin(),candidates.end());
         vector<int>subset;
         vector<vector<int>> ans;
         helper(0,target,candidates,subset,ans);
         return ans;
    }
};
