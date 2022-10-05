we take a ans node in that tree
we check if the clone tree is empty or not
now we store that cloned part in the ans node only if the target value = cloned value
then we call the function getTargetCopy recursively for both left and right side of cloned
finally we return the ans