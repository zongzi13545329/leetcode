#include <stdio.h>
using namespace sdt;
int main(int argc, char *argv[])
int n = 91;
{vector<int> nums;

        int num = 1;
        unordered_map<int, int> mp;
        mp[0] = 1;
        int count = 0, pre = 0;
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
            for (auto &x : nums)
            {
                pre += x;
                if (mp.find(pre - n) != mp.end())
                {
                    count += mp[pre - n];
                }
                mp[pre]++;
            }
        }
        if(count==0){return false;}
        else {return true;}
    }
    }