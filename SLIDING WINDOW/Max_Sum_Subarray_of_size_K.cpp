/*
Max Sum Subarray of size K   [GFG]

https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1#

Intuition:-
1. Take two pointers i & j such that i is the starting of the window & 
j is the end of the window.
2. if (j-i+1<k) =>if this holds true ,then we haven't yet reached a window of size k,
therefore increase k by 1.
3. if (j-i+1)==k i.e. we have got a window of size k , then find the max sum till now
and after that decrease Arr[i] from sum & increase i&j by 1.
#We are decreasing Arr[i] because when we'll move the window ,we'll add a new value i.e. 
at the new j-th position & will subract a value from left i.e. the one at old i-th position . 

This is a problem of sliding window.
How to identify?
-We have been given an array
-We have to find the larget sum in SUBARRAY of size K
-Window size K is given
Key terms:-SUBARRAY,WINDOW SIZE-K,MAX/MIN/LARGEST

*/

class Solution{
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N)
    {
        int i=0;
        int j=0;
        int sum=0;
        int ans=INT_MIN; //this variable will give the final answer
        while(j<N)//we'll be forming window untill j<N
        {
            sum=sum+Arr[j];//calculating sum as we move j
            
            if(j-i+1<K) //if the size of the window is less than k,the increase j by 1
            j++;
            
            else if(j-i+1==K)
            {
                //if size of window becomes k, then find the max sum 
                ans=max(ans,sum);
                //move the window by incrementing i&j ,& decrease Arr[i]
                sum=sum-Arr[i];
                i++;
                j++;
            }
        }
    return ans;
    }
};
