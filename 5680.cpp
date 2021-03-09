class Solution
{
public:
    int nearestValidPoint(int x, int y, vector<vector<int>> &points)
    {
        int len = point.size();
        vector<vector<int>> news;
        int lennew = 0;
        for (int i = 0; i < len; i++)
        {
            if (points[i][0] == x)
            {
                news.push_back(vector<int>(2));
                news[lennew][0] = abs(point[i][1] - y);
                news[lennew][1] = i;
                lennew++;
            }
            else if (point[i][1] == y)
            {
                news.push_back(vector<int>(2));
                news[lennew][0] = abs(point[i][0] - x);
                news[lennew][1] = i;
                lennew++;
            }
        }
        if (lennew == 0)
        {
            return -1;
        }
        else
        {
            sort(news.begin(), news.end(), [](const auto& e1, const auto& e2) {
                return e1[0] < e2[0] || (e1[0] == e2[0] && e1[1] < e2[1]);
                return news[0][1];
        }
        
    }
};