class Solution {
public:
    int numDecodings(string s) {
        // if(s[0] == '0') return 0;
        // if(s[1] == '1') return 1;
        // int len = s.size(), dp[3];
        // dp[0] = 1;
        // dp[1] = (s[0] == '1' || s[0] == '2' && s[1] < '7' ? 1 : 0) + (s[1] != '0');
        // for (int i = 2, curr, prev; i<len; i++){
        //     curr = i%3; // curr = 2 when i =2
        //     prev = curr? curr-1:2; // curr = 1 else return 2
        //     if(s[0] == '0' && (s[i-1] > '2'||s[i-1] == '0' )) return 0;
        //     // we quit for 2 consecutive zeros 
        //     dp[curr] = s[i]!='0' ? dp[prev]:0; // we always keep the previous set of combinations, unless we met a 0
        //     // dp[curr] = 1 from line 10
        //     if(s[i-1] == '1' || s[i-1] == '2' && s[i] <'7') 
        //         dp[curr] += dp[prev ? prev - 1 : 2];
        //     // we go and look 2 positions behind if we can make a digit in the 10-26 range
        // }
        // return dp[(len-1) % 3]; // coz len starts from 1 and we take the modulo of it as the size of dp is 3
         // edge cases out - leading zero and single character string
        if (s[0] == '0') return 0;
        if (s.size() == 1) return 1;
        // support variables
        int len = s.size(), dp[3];
        // preparing dp
        dp[0] = 1;
        dp[1] = (s[0] == '1' || s[0] == '2' && s[1] < '7' ? 1 : 0) + (s[1] != '0');
        for (int i = 2, curr, prev; i < len; i++) {
            curr = i % 3;
            prev = curr ? curr - 1 : 2;
            // edge case: we quit for 2 consecutive zeros
            if (s[i] == '0' && (s[i - 1] > '2' || s[i - 1] == '0')) return 0;
            // base case: we always keep the previous set of combinations, unless we met a 0
            dp[curr] = s[i] != '0' ? dp[prev] : 0;
            // we go and look 2 positions behind if we can make a digit in the 10-26 range
            if (s[i - 1] == '1' || s[i - 1] == '2' && s[i] < '7') dp[curr] += dp[prev ? prev - 1 : 2];
        }
        return dp[(len - 1) % 3];
    }
};