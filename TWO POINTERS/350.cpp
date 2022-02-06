/*

350. Intersection of Two Arrays II

https://leetcode.com/problems/intersection-of-two-arrays-ii/

intuition : storing the frequency of each element of the two arrays in two different maps followed by traversing nums1,finding the minimum of the i th value of both the maps and
pushing it till that time to the vector.

1. TC=O(n2)
2. SC=O(n)
*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        
        for(auto i:nums1)
            m1[i]++;
        for(auto i:nums2)
            m2[i]++;
        
        vector<int>ans;
        for(auto i:m1)
        {
            if(m2[i.first]!=0)
            {
                int temp=min(m1[i.first],m2[i.first]);
                while(temp--)
                    ans.push_back(i.first);
            }
        }
    return ans;
    }
};