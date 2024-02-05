class Solution {
    public static int[] twoSum(int[] nums, int target) {
        int t;
        for (int a = 0; a != nums.length; a++) {
            for (int b = 0; b != nums.length; b++) {
                if (((nums[a] + nums[b]) == target) && (a != b)) {
                    int[] r = {a, b};
                    return r;
                }
            }
        }
        int[] r = {0, 0};
        return r;
    }
}