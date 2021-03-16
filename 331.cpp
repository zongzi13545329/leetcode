class Solution
{
public:
    bool isValidSerialization(string preorder)
    {
        int len = preorder.length();
        int num = 0;
        if (len < 1)
            return false;
        if (len == 1 && preorder[0] != '#')
            return false;
        else if (len>1&&len<5) return false;
        else if (len >= 5)
        {
            if (preorder[len - 1] != '#' || preorder[len - 3] != '#')
                return false;
            else
            {
                for (int i = 0; i < len - 1; i ++)
                {
                    if (preorder[i] >= '0' && preorder[i] <= '9')
                    {
                        while (i < len-1 && preorder[i] >= '0' && preorder[i] <= '9')
                        {
                            i++;
                        }
                        num--;
                    }
                    else if (preorder[i]=='#') num++;
                    if(num>0) return false;
                }
            }
        }
        return true;
    }
};