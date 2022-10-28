This can be solved by reversing the 2nd half and compare the two halves. Let's start with an example [1, 1, 2, 1].
​
In the beginning, set two pointers fast and slow starting at the head.
​
1 -> 1 -> 2 -> 1 -> null
sf
(1) Move: fast pointer goes to the end, and slow goes to the middle.
​
1 -> 1 -> 2 -> 1 -> null
s          f
(2) Reverse: the right half is reversed, and slow pointer becomes the 2nd head.
​
1 -> 1    null <- 2 <- 1
h                      s
(3) Compare: run the two pointers head and slow together and compare.
​
1 -> 1    null <- 2 <- 1
h            s
​