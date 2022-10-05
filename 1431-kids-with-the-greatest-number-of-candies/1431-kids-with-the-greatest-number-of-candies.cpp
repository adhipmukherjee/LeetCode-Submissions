class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> ans(n);
        int max = *max_element(candies.begin(), candies.end());
        int temp = 0;
        for (int i = 0; i<n; i++){
            temp = candies[i]+extraCandies;
            if (temp >= max)
                ans[i]=true;
            else 
                ans[i]=false;
        }
        return ans;    
    }
};