/*

First negative integer in every window of size k [GFG]

https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

*/

vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K)
{
    int start=0;
    int end=0;
    vector<long long int>ans;
    K--;
    while(start<N-K)
    {
        while(end!=N && A[end]>=0) end++; //if A[end] isn't negative ,then increment end,untill we get -ve value 
        
        if(start<=end && start+K>=end)//we are checking if A[end] lies in the window or not
        {
            ans.push_back(A[end]);
        }
        else ans.push_back(0);
        
        start++;
        if(start>end && end!=N) end++;
    }
return ans;
}