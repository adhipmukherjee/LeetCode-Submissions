if s size is 1 we check the first element if it is zero we return 0 else we proceed
len stores the size of string and dp of size 3
we initialize the dp[0] with 1
in dp[1] we check if s[0] is 1 or s[0] = 2 && less than 7, coz there are 26 alphabets if this satisfies we return 1 else 0, we also check if s[1] !=0
we run a loop from 2 to len
initializing curr and prev pointers to 2
​
​