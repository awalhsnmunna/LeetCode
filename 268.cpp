
// Question: https://leetcode.com/problems/missing-number/  //

class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int totalSum = 0;
    int n = nums.size();

    for (int i = 0; i < nums.size(); i++)
    {
        totalSum += nums[i];
    }

    int AllNSum = (n * (n + 1)) / 2;

    return AllNSum-totalSum;
    
    }
};
