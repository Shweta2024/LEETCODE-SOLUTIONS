/*
Longest Sub-Array with Sum K [GFG]

https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1

*/

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    {
        //find longest subaaray with sum=K
        
        int ans=0;
        for(int i=1;i<N;i++)
        A[i]=A[i-1]+A[i]; //calculating the cummulative sum
        
        unordered_map<int,int>m;
        m[0]=-1;//this is becaz,if we find a value equals to K at the 0-th position
        //then in that case K-K exists at -1,so size of subarray =0-(-1)=1.
        
        for(int i=0;i<N;i++)
        {
            if(m.count(A[i]-K)==1)
            {
                int len=i-m[A[i]-K];
                ans=max(ans,len);
            }
            
            if(m.count(A[i])!=1)
            m[A[i]]=i;
        }
        
    return ans;
    }
    

};