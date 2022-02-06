/*
658. Find K Closest Elements

https://leetcode.com/problems/find-k-closest-elements/

intuition : storing the diffrence of the absolute values of arr & x and values of arr in a vector.Followed by stable sorting. And while k we will be pushing the values of arr in the resulting vector and finally sorting the resulting vector after sorting it.

#stable sort->sort the elements in the same order as it in present in the question whenever two equal values are found.

1. TC=O()
For stable_sort() it is O(n*log^2(n)) if additional memory linearly proportional to length is not available. If its available then O(n*log(n)).

*/

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x)
    {
    /* arr = [1,2,3,4,5], k = 4, x = 3
       |1-3|=2
       |2-3|=1
       |3-3|=0
       |4-3|=1
       |5-3|=2   */
        
        vector<int>ans;//final answer
        vector<pair<int,int>>v; 
        for(auto i:arr)
        {
            v.push_back({abs(i-x),i});
        }
        
        stable_sort(v.begin(),v.end());
        /*for(auto i:v)
        {
            cout<<i.first<<" "<<i.second<<endl;
        }*/
        
        int i=0;
        while(k--)
        {
            ans.push_back(v[i].second);
            i++;
        }
        sort(ans.begin(),ans.end());
        
        
    return ans;
    }
};