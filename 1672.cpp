class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m;
        int n;
        int max = 0;
        m = accounts.size();
        n = accounts[0].size();
        for (int i=0; i<m; i++){
            int tmp = 0;
            for (int j=0; j<n; j++){
                tmp += accounts[i][j];
            }
            if(tmp > max){
                max = tmp;
            }
        }
        return max;


    }
};