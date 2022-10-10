class Solution {
    public int[] createTargetArray(int[] nums, int[] index) {
        int[] target = new int[nums.length];
        int k=0, i=0;
        while (i < index.length) {
		for (k = target.length - 1; k > index[i]; k--)
			target[k] = target[k - 1];
		target[index[i]] = nums[i];
		i++;
        }
        return target;
    }
}