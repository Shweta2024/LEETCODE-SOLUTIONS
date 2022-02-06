/*

1877. Minimize Maximum Pair Sum in Array

https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/

intuition : Sorting the vector, followed by initiallizing two pointers start(points the 1st element of the vector) & end(points the last element of the vector) ,followed by  finding the sum of the values at start & end  untill start<end, and comparing the previous value of sum & the new value & then taking the max of them,and then incrementing start & decrementing end . 
finally returning the max_sum.

1. TC=O(n logn)
=>since the time complexity of sort function is->O(N logN)
2. SC=O(1)
*/


class Solution {
public:
    int minPairSum(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        
        int ans=INT_MIN;
        int l=0;
        int r=nums.size()-1;
        
        while(l<r)
        {
            ans=max(ans,nums[l]+nums[r]);
            l++;
            r--;
        }
    return ans;
    }
};

    