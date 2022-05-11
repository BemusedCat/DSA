class Solution {
    int cS(int n, vector<int> &dp){
        if(n<=1) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=cS(n-1,dp)+cS(n-2,dp);
    }
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return cS(n,dp);        
    }
};
