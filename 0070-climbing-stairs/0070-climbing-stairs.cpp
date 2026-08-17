class Solution {
public:

  int solve(vector<int> &dp,int n){
    if(n==0 || n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    int left=solve(dp,n-1);
    int right=solve(dp,n-2);
    return dp[n]=left+right;
  }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return solve(dp,n);
    }
};