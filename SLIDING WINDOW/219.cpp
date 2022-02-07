/*
219. Contains Duplicate II

https://leetcode.com/problems/contains-duplicate-ii/


Intuition :-
1. If k==0,return false because in the window of size 0 we cannot get any duplicate value.
2. Create an unordered map.
3. Now traverse the array & :-
      1. if that element already exists in the map , then check if the difference of their indices
      lies in the window of size k.If it lies then return true.
      2. If the element isn't present in the map , then add it into the map.
      
1. TC=O(N)
=>Since in the worst case i.e. when there won't be any dublicate value in the window size of k ,we'll have to traverse through the entire array.
2. SC=O(N)
=>Since we are using an unordered_map & in worst case it'll have to store each element & its index.


*/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        if(k==0) return false;
        
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
//m.count(m[nums[i]])==1,if this holds then it means that 1 is already present in the map.
            if(m.count(nums[i])==1 && abs(i-m[nums[i]])<=k)
                return true;
            
            m[nums[i]]=i;
        
        }
    return false;
    }
};

