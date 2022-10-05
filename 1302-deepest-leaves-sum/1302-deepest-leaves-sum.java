/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int sum=0;
    int maxDepth=0;
    public int deepestLeavesSum(TreeNode root) {
        findSum(root, 1);
        return sum;
    }
    
    public void findSum(TreeNode node, int current){
        if(node != null){
            if(current>maxDepth){
                sum=0;
                maxDepth=current;
            }
            if(current == maxDepth)
                sum+=node.val;
        findSum(node.left, current+1);
        findSum(node.right, current+1);
        }
        
    }
}