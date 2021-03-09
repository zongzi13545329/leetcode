class Solution {
public:
    bool checkOnesSegment(string nums) {
        int maxCount = 0, count = 0,mid = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == '1') {
                count++;
                
            } else {
                if (count>0) maxCount ++;
                count = 0;
            }
        }
        if((maxCount==1&&count==0)||count==n){return true;}
        else return false;
    }
};