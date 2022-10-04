first we check if the tree is empty
​
then we chack if the tree has any nodes, if it doesn't then the targetSum value = root value
​
if the root has nodes then we check the left path first, with targetSum-root = new sum which must be equal to the left path and similar for the right path
​
we cut of the root value form targetSum because it is the start node and we have to include it if we go either direction hence we match the new sum value with either path