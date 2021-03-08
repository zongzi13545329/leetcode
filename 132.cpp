class Solution
{
private:
    vector<vector<int>> f;
    vector<vector<string>> ret;
    vector<string> ans;
    int n;

public:
    int minCut(string s)
    {
        int count1 = 0;
        int count2 = 0;
        n = s.size();
        f.assign(n, vector<int>(n, true));

        for (int i = n - 1; i >= 0; --i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                f[i][j] = (s[i] == s[j]) && f[i + 1][j - 1];
            }
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = n - 1; j >= i; --j)
            {
                if (f[i][j] == true)
                {
                    count1++;
                    i = j;
                    break;
                }
            }
        }
        for (int j = n - 1; j >= 0; j--)
        {
            for (int i = 0; i <= j; i++)
            {
                if (f[i][j] == true)
                {
                    count2++;
                    j = i;
                    break;
                }
            }
        }
        return min(count1, count2) - 1;
    }
};