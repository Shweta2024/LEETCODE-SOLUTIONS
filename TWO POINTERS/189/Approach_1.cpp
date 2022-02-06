/*

189. Rotate Array

https://leetcode.com/problems/rotate-array/

**Approach 1 [Brute Force]
1. TC=O(n)
2. SC=O(k)   ->since we are creaking an extra vector of size k.

Intuition:-
1. If k>=n then take  k = k%n
2. Create a vector temp of size k.
3. Store the last k elements in temp.
4. Shift the rest of the elements each by 1 position to the right in the nums vector.
5. Store the last k elements in the first k indices of  nums.

*/

//Input: nums = [1,2,3,4,5,6,7], k = 3
//Output: [5,6,7,1,2,3,4]

class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n=nums.size();
        if (k>=n) k=k%n;
        vector<int>temp(k,0);
        
        int i=n-k;
        int j=0;
        int a=k;
        while(a--)
        {
            temp[j]=nums[i];
            i++;
            j++;
        } 
        //temp=[5,6,7]
        
        int start=n-k-1;
        int end=n-1;
        
        while(start>=0)
        {
            nums[end]=nums[start];
            end--;
            start--;
        }
        
        i=0;
        while(i<k)
        {
            nums[i]=temp[i];
            i++;
        }
        

    }
};

