class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>code1=code;
        if(k==0)
        {
            for(int i=0;i<code.size();i++)
            {
                code1[i]=0;
            }
        }
        else if(k>0)
        {
            
            for(int i=0;i<code.size();i++)
            {
                int temp=0,add=0;
                while(temp<k)
                {
                    temp++;
                    add+=code[(temp+i)%code.size()];
                }
                code1[i]=add;
            }
        }

        else 
        {  
            for(int i=0;i<code.size();i++)
            {
                int temp=0,add=0;
                while(temp>k)
                {
                    temp--;
                    add+=code[(i+temp+code.size())%code.size()];
                }
                code1[i]=add;
            }
        }
        return code1;
    }
};
