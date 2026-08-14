class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxind=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
        int steps=0;
        steps=i+nums[i];
        if(i>maxind) return false;
         maxind=max(maxind,steps);
        }
        cout<<maxind;
        if(maxind>=n-1) return true;
        else return false;
    }
};