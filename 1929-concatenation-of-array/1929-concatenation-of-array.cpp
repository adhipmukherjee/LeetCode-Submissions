class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> m = nums;
        for (auto it: nums)
            m.push_back(it);
        return m;
    }
};