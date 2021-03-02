class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int left = 0;
        int right = -1;
        int len = s.size();
        vector<int> answer(len);
        for(int i=0; i<len; i++){
            if(s[i] == c){
                answer[i] = 0;
                left = right;
                right = i;
                for(int j=left+1; j<right; j++){
                    if(left >= 0){
                        answer[j] = min(right-j,j-left);
                    }
                    else {answer[j] = right-j;}
                }
            }
        }
        if(right < len-1){
            for(int j = right+1; j<len; j++){
                answer[j] = j-right;
            }
        }
        return answer;

    }
};