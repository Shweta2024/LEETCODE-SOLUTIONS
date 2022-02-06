/*
1679. Max Number of K-Sum Pairs

https://leetcode.com/problems/max-number-of-k-sum-pairs/

Intuition :- First of all sort the given array.Followed by taking two pointers l & r.Initially L is pointing the first element & r is pointing the last element. Iterate untill l<r and check :-
-If the sum of elements at l & r equals to k the increment ans[counter to keep track of no. of operations needed].
-Else if their sum is greater than k , then decrement r.
-Else if their sum is less than k , then increment l.
At last return ans.

1. TC=O(N)
2. SC=O(1)
*/

class Solution {
public:
    int maxOperations(vector<int>& nums, int k)
    {
        //nums = [3,1,3,4,3], k = 6
        
        sort(nums.begin(),nums.end());   // [1,3,3,3,4]
        int ans=0;
        int l=0;
        int r=nums.size()-1;
        while(l<r)
        {
            if(nums[l]+nums[r]==k)
            {
                ans++;
                l++;
                r--;
            }
            
            else if(nums[l]+nums[r]>k)
                r--;
            else
                l++;
        }
    return ans;
    }
};