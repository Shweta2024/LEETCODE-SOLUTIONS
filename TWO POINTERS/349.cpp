/*
349. Intersection of Two Arrays

https://leetcode.com/problems/intersection-of-two-arrays/

Intuition : Storing elements of nums1 & nums2 with their corresponding frequencies in two unordered maps m1&m2 respectively.Now we are checking that if the frequency of an element present in m1 is non-zero in m2 then it means that the element is present in both of them.Therefore inserting them in the resultant vector ans.

1. TC=O(n)
=>Since only a for loop is used
1. SC=O(n)
=>Since we have created a vector ans & there might be a possibility that all the elements of m1 is present in m2.
*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        vector<int>ans;
        
        for(auto i:nums1)
            m1[i]++;
        
        for(auto i:nums2)
            m2[i]++;
        
        for(auto i:m1)
        {
            if(m2[i.first]!=0)
                ans.push_back(i.first);
        }
        
    return ans;
    }
};