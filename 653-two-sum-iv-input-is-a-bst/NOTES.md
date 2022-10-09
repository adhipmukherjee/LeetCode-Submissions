we take a hash map set
we first check if root is present
While traversing the tree, if we saw already k - root->val, then we have a two sum, return true. Otherwise, insert val into set and keep traversing
then we call recursively the main function to check if the sum matches anywhere in the bst