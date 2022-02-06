/*
1004. Max Consecutive Ones III

https://leetcode.com/problems/max-consecutive-ones-iii/

Intuition :- Initially start=0,end=0,zero=0,ans=INT_MIN.
If 0 is encountered increment zerocount and 
    1.If zerocount is less than k ,then, increase start.
    2.If zerocount is greater than k ,then, if value at start equals 0 decrease zerocount untill zerocount becomes less then k and keep on incrementing start.

1.TC=O(n)
2.SC=O(1)
*/

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {
        int start=0;
        int end=0;
        int n=nums.size();
        int zerocount=0;//to keep a track of no. of zeros in the window
        
        int ans=INT_MIN;
        while((start<n) && (end<n))
        {
            if(nums[end]==0)
                zerocount++;

            while(zerocount>k)
            {
                if(nums[start]==0)
                    zerocount--;
                start++;
                
            }
            ans=max(ans,end-start+1);
            end++; 
        }
    return ans;
    }
};
