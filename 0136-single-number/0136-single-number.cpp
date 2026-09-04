class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int req=0;
        for(int i=0;i<nums.size();i++){
            req=req^nums[i];
        }
        return req;
    }
};