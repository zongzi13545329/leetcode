class Solution
{
public:
    bool checkPowersOfThree(int n)
    {
        vector<int> nums;
        int num = 1;
        int count2 = 0;
        while (num < n)
        {
            nums.push_back(num);
            num = num * 3;
        }
        if (nums.size() == 0)
        {
            return false;
        }
        else
        {
            count2 = subarraySum(nums, n);
        }
        if(count2==0)return false;
        else return true;
    }
        int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int count = 0, pre = 0;
        for (auto& x:nums) {
            pre += x;
            if (mp.find(pre - k) != mp.end()) {
                count += mp[pre - k];
            }
            mp[pre]++;
        }
        return count;
    }
};