class Solution {
public:
    vector<int> ans;  // 存储答案
    map<int, int> bit2cnt;  // "字符串word转化为一个数(位运算): 该模式出现的次数"  的映射
        
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        // 统计每个word模式的数量, map形式保存, 位运算进行操作
        for (int i = 0; i < words.size(); ++i) {
            int k = 0;
            for (int j = 0; j < words[i].size(); ++j) {
                k |= (1 << (words[i][j] - 'a'));
            }
            bit2cnt[k] += 1;
        }
        
        for (int i = 0; i < puzzles.size(); ++i) {
            ans.push_back(0);
            int k = 0;
            for (int j = 0; j < puzzles[i].size(); ++j) {  // 将puzzles的字符串转化为一个 数字
                k |= (1 << (puzzles[i][j] - 'a'));
            }
            for (int j = k; j; j = (j - 1)&k) {  // 遍历 该数字 出现1 的子集, 比如0101 遍历到 0101, 0100, 0001. 再判断首字母.
                if ((1 << (puzzles[i][0] - 'a')) & j) ans[i] += bit2cnt[j];
            }
        }
        return ans;
    }
};
