class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        vector <int> arr;
        for (int i =2; i<=n-1; i++){
            int temp = n;
            while(temp){
                arr.push_back(temp%i);
                temp/=i;
            }
            int x =0;
            int j = arr.size();
            while (x<j){
                if(arr[x]!=arr[j-x-1])
                    return false;
                x++;
            }
            arr.clear();
        }
        return true;
    }
};