/*
75. Sort Colors

https://leetcode.com/problems/sort-colors/

Intuition :- Taking 3 variables : count_0, count_1=0 & count_2=0 to store the frequencies of 0,1&2 respectively. Followed by updating values of nums.

1. TC=O(N)
2. SC=O(1)
*/

class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        int count_0=0;
        int count_1=0;
        int count_2=0;
        
        for(auto i:nums)
        {
            if (i==0) count_0++;
            else if (i==1) count_1++;
            else count_2++;
        }
        int i=0;
        while(count_0--)
        {
            nums[i]=0;
            i++;
        }
        while(count_1--)
        {
            nums[i]=1;
            i++;
        }
        while(count_2--)
        {
            nums[i]=2;
            i++;
        }
    }
};