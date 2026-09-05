class Solution {
public:
    vector<vector<int>> solve(vector<int>& nums,int cur,int n,vector<vector<int>>& ans,vector<int>& diary){
        if(cur==n){
            ans.push_back(diary);
            return ans;
        }
        solve(nums,cur+1,n,ans,diary);
        diary.push_back(nums[cur]);
        solve(nums,cur+1,n,ans,diary);
        diary.pop_back();
        return ans;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>diary;
        return solve(nums,0,nums.size(),ans,diary);
    }
};