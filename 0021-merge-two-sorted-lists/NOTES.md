The reasoning behind this approach is the following:
​
first two if's are trivial
third if-else isn't that trivial: The programmer assumed that L2 list is going to be the answer,
and this isn't wrong as long as you correct yourself when list L1 is the correct answer by adding the line of code like ( l2 =l1; ).
So he/she thought the following:
If the value of the element in the second list L2 is strictly smaller than the element in the first list L1 just add it to list L2 and call for the next element from list L2 ( this was the line of code that did that):
Else, the value of the element in the second list L2 is greater than the element in the first list L1, then assume the L1 is the correct list and call with the same logic
but now you must correct yourself by placing your initial beliefs with L2 by At the end just return l2; Because that was your initial belief! Because the recursion only looks locally per iteration, thus, it must always think that l2 pointer points to the smaller element of those two lists, because you are always returning the l2!
Think about recursion as a single iteration in the middle it really helps! :)) Upvote if you agree :D