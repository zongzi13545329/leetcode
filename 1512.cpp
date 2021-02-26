class Solution
{
public:
   int numIdenticalPairs(vector<int> &nums)
    {
        int len = nums.size();
        int sum = 0;
        int k = 0;
        int tmp = 0;
        int i = 0;
        if ((len == 0) || (len == 1))
        {
            return 0;
        }
        else
        {
            while(k<len)
            {
                i = k;
                k = i + 1;
                for (int j = i + 1; j < len; j++)
                {
                    if (nums[j] == nums[i])
                    {
                        tmp = nums[k];
                        nums[k] = nums[j];
                        nums[j] = tmp;
                        k++;
                    }
                }

                sum = sum + ((k - i)*(k - i -1) / 2);

                
            }
        }
        return sum;
    }
};