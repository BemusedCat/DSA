class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec;
       for(int i=0;i<numRows;++i){
            vector<int> temp(i+1);
           temp[0]=1;
           temp[i]=1;
           for(int j=1;j<ceil((double)(i+1)/2) && (i >1);++j){
               temp[j]=vec[i-1][j-1]+vec[i-1][j];
               temp[i-j]=temp[j];
           }
           vec.push_back(temp);
       }
        return vec;
    }
};
