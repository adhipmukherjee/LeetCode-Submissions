We are going to use a two pointer approach to solve this.
​
The idea here is that
1. We will store the characters of t in a map lets say mapt.
2. We will have two pointers l and r.
3. Whille we traverse through s we check if the character is found in mapt If so we will store the character into another hash map lets say maps.
4. If the mapped charcter freq of s is less than or equal to mapt we increment a letter counter variable that will let us know when we have reached the t string size.
5. We try to find the smallest substring which contains all chracters in t using a while loop.
​
S = "ADOBECODEBANC" and T = "ABC"
​
mapt
A -> 1
B -> 1
C -> 1
​
We keep l=0 and traverse S with r.
​
"ADOBECODEBANC"
^
|
r
​
as A is present in t we use another map for s to store A into the hashmap
​
maps
A->1
we have another variable lettercounter that keeps track of the size.
lettercounter
1
​
"ADOBECODEBANC"
^
|
r
As D isnt present in t we just continue traversing.
​
"ADOBECODEBANC"
^
|
r
Same as the above step.
​
"ADOBECODEBANC"
^
|
r
As B is present in map t
​
maps
A->1
B->1
​