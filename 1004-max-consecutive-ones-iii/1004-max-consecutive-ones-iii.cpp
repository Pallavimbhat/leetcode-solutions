class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=0;
        int maxl=0,zeros=0;
        while(r<n){
            if(nums[r]==0){
                zeros++;
            }
            r++;
            if(zeros>k){
                while(nums[l]!=0){
                    l++;
                }
                zeros--;
                l++;
            }
            int len=r-l;
            maxl=max(maxl,len);

        }
        return maxl;
    }
};