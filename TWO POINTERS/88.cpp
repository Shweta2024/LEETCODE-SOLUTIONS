/*
88. Merge Sorted Array

https://leetcode.com/problems/merge-sorted-array/

Intuition : We are first storing all the elements of nums2 in nums1.Then taking two pointers l & r with initial value 0 & 1 respectively.While ((l<r) && (r<m+n)) this holds we will  check if nums1[l]> nums1[r] then we will swap then and initialize l& r to 0 & 1;Else we will simply increment then.

1.TC=O(m+n)
2.SC=O(1)
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int i=m;
        int j=0;
        while(i<m+n && j<n)
        {
            nums1[i]=nums2[j];
            i++;
            j++;
        }
        
        int slow=0;
        int fast=1;
        while(fast<m+n && slow>=0)
        {
            if(nums1[slow]>nums1[fast] && slow!=0)
            {
                swap(nums1[slow],nums1[fast]);
                slow--;
                fast--;
            }
            else if(nums1[slow]>nums1[fast] && slow==0)
            {
                swap(nums1[slow],nums1[fast]);
                slow++;
                fast++;
            }
            else
            {
                slow++;
                fast++;
            }
        }

    }
};