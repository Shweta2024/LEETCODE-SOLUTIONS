/*

977. Squares of a Sorted Array

https://leetcode.com/problems/squares-of-a-sorted-array/

Intuition :-Squaring each elements of the given vector , followed by sorting then using sort function.

TC=O(N log N)
	sort function->O(NlogN)
SC=O(1)
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        //squaring each element of the array
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]*nums[i];
        }
        
        //sorting the array
        sort(nums.begin(),nums.end());
        
 return nums;
    }
};