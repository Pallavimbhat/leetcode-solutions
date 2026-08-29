class Solution {
public:
  vector<vector<int>> ans;
  vector<int> diary;
   vector<vector<int>> solve(vector<int>& nums, int cur){
    if(cur>=nums.size()){
        ans.push_back(diary);
        return ans;
    }
    solve(nums,cur+1);
    diary.push_back(nums[cur]);
    solve(nums,cur+1);
    diary.pop_back();
    return ans;
   }
    vector<vector<int>> subsets(vector<int>& nums) {
        return solve(nums,0);
    }
};