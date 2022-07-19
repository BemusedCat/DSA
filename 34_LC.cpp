class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0)
            return {-1,-1};
        int lo=0;
       int hi=n-1;
         int  ans=-1;
    int mid;
        while(lo<=hi){
          mid= lo+(hi-lo)/2;
            cout<<lo<<" "<<hi<<endl;
            if (nums[mid]==target){
                ans=mid;
                break;}
        else if(nums[mid]<target)
            lo=mid+1;
        else
            hi=mid-1;
            }
        if (ans==-1)
            return {-1,-1};
        int loa=mid,hia=mid;
        cout<<mid;
        while(loa-1>=0 && nums[loa-1]==nums[mid])
            loa--;
        while(hia+1<n && nums[hia+1]==nums[mid])
            hia++;
        return {loa,hia};
    }
};
