class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        
        for (int i=0; i<queries.size(); i++){
            int count = 0;
            for (int j=0; j<points.size(); j++){
                int x = points[j][0] - queries[i][0];
                int y = points[j][1] - queries[i][1];
                if (sqrt((x*x) + (y*y)) <= queries[i][2])
                    count++;      
            }
            ans.push_back(count);
        }
        return ans;
    }
};