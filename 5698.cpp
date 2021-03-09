class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        int len = nums.size();
        int num = 0;
        for(int i=0; i<len; i++){
            goal = goal - nums[i];
            if(goal<0){
                while(goal<0){
                    goal = goal+limit;
                    num++;
                }
            }
        }
        return num;

    }
};