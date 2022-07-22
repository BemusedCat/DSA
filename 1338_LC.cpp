class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto x:arr){
            mp[x]++;
        }
        priority_queue<int> maxh;
        for(auto x:mp){
            maxh.push(x.second);
        }
        int sum=0,count=0;
        while(sum<arr.size()/2){
            count++;
                sum+=maxh.top();
                maxh.pop();
        }
        return count;
            
    }
};
