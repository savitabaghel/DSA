class Solution {
public:
    
    
    
    void helper(vector<int> candidates,int i,int target,int size,vector<int>& subset,vector<vector<int>> & ans){
        if(i==size){

            if(target==0){
                cout<<"Hi ";
               ans.push_back(subset);
               }

           return;      
        }
       
        if(target>=candidates[i]){
            subset.push_back(candidates[i]);
             helper(candidates,i,target-candidates[i],size,subset,ans);
             subset.pop_back();
        }

    
        helper(candidates,i+1,target,size,subset,ans);

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>subset;
        vector<vector<int>> ans;
        int size= candidates.size();
        helper(candidates,0,target,size,subset,ans);
        return ans;
    }
};
