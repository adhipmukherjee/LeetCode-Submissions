We take an ans vector to store the result.
Taken 2 for loops: i will start from 0 & j will start from i+1 (i=0, j=i+1)
Simply we’ll add nums[i] & nums[j], if they are equal to target we’ll push i,j to our ans vector.
Finally we’ll return the ans vector.
Time complexity: O(n^2)