/*
27. Remove Element

https://leetcode.com/problems/remove-element/

Intuition :-
1. First of all , count the total frequency of val in the given vector. 
2. K is the size of the requred vector = nums.size()-frequency of val.
3. Now , take two pointers start=0 & end=nums.size()-1.
-If we get val at start & not at end, then swap them & increment start by one & decrease end by 1.
-Else if we get val at start & val at end , then swap the value at start with the value at end-1.
And decrement end.
-Else if both the values at start & end aren't equal to val, then simply increment start by 1. 

1. TC=O(n)
2. SC=O(1)
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        //nums = [3,2,2,3], val = 3
        
        int cnt=0;
        for(auto i:nums)
        {
            if(i==val)
                cnt++;
        }
        int k=nums.size()-cnt;

        int start=0;
        int end=nums.size()-1;
        while(start<end)
        {
            if(nums[start]==val && nums[end]!=val)
            {
                swap(nums[start],nums[end]);
                end--;
                start++;
            }
            else if(nums[start]==val && nums[end]==val)
            {
                swap(nums[start],nums[end-1]);
                end--;
            }
            else 
                start++;
        }
    return k;
    }
};