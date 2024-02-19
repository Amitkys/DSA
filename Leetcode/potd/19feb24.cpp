// problem link : https://leetcode.com/problems/power-of-two/submissions/1179900999/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)   return false;
        if(__builtin_popcount(n) == 1) return true;
        return false;
    }
};