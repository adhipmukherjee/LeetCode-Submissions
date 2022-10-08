class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int closestSum = nums[0] + nums[1] + nums[2];
        int current, j, k;
        sort (nums.begin(), nums.end());
        for(int i = 0; i<n; i++){
            k=n-1; 
            j=i+1;
        
        while (j<k){
            current = nums[i] + nums[j] + nums[k];
            if(abs(current-target) < abs(closestSum-target))
                closestSum=current;
            if (current < target) j++;
            else k--;
            }
        }
        return closestSum;
    }
};