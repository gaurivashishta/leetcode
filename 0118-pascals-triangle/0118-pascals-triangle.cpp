class Solution {
public:
  vector<int> genrow(int r){
        long long ans=1;
        vector<int> ansR;
        ansR.push_back(1);
        for(int c=1;c<r;c++){
            ans=(ans*(r-c))/c;
            ansR.push_back(ans);
        }
        return ansR;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> finalans;
        for(int i=1;i<=numRows;i++){
            finalans.push_back(genrow(i));
        }
        return finalans;
    }
};