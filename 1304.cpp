class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>exam(n);
        if (n%2){
            for(int i=0; i<n-1;i+2){
                exam[i] = i;
                emam[i+1] = -i;

            }
            exam[n-1] = 0;
        }
        else{
            for(int i=0; i<n1;n+2){
                exam[i] = i;
                emam[i+1] = -i;

            }
        }
        return exam;

    }
};