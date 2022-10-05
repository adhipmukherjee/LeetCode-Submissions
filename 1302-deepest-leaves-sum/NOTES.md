this code is done in java, few things are there is no pointer, NULL isn't accepted but null is
we initialise the sum and maxDepth to 0
then in the deepestLeavesSum function we call the findSum function and return the sum value
​
in the findSum function we have two parameters current and node
we check if the node isn't null,
then we check if the current > maxDepth then maxDepth = current and sum is again initialised to 0
if current = maxDepth then we add the value sum+=node.val
then we call the findsum function recursively for left and right nodes
​