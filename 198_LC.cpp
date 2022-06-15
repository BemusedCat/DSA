class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return *max_element(nums.begin(),nums.end());
        vector<int> dp(n);
        dp[0]=nums[0];
        dp[1]=nums[1];
        dp[2]=nums[2]+dp[0];
        if(n==3) return *max_element(dp.begin(),dp.end());
        for(int i=3;i<n;++i){
            dp[i]=max(dp[i-2]+nums[i],dp[i-3]+nums[i]);
        }
        return max(dp[n-1],dp[n-2]);
    }
};
