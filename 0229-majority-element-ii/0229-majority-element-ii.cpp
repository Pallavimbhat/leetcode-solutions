class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]==(n/3+1)){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};