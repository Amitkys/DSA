// problem link  https://leetcode.com/problems/majority-element/submissions/1173448026/
class Solution {
    public int majorityElement(int[] nums) {
        int res = 0;
        int majority = 0;
        
        for (int n : nums) {
            if (majority == 0) {
                res = n;
            }
            
            majority += n == res ? 1 : -1;
        }
        
        return res;        
    }
}