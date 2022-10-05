class Solution {
public:
    int minimumSum(int num) {
        vector<int> arr;
        
        while(num!=0){
            arr.push_back(num%10);
            num=num/10;
        }
        sort(arr.begin(), arr.end());
        int num1 = 0, num2=0;
        for (int i=0; i<arr.size(); i++){
            if(i%2==0)
                num1=num1*10+arr[i];
            else 
                num2=num2*10+arr[i];
        }
        return num1+num2;
    }
};