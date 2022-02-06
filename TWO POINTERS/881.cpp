/*
881. Boats to Save People

https://leetcode.com/problems/boats-to-save-people/

Intuition :- we'll take 2pointers start & end , and will check if the sum of values at start & end is less than or equal to limit, then increment ans ,followed by incrementing start &decrementing end.
Else if their sum is greater than limit then increment ans & decrease end.

1. TC=O(N logN)
=>since time complexity of sort function->O(N logN)
2. SC=O(1)

*/
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit)
    {
        sort(people.begin(),people.end());
        
        int start=0;
        int end=people.size()-1;
        int ans=0;
        
        while(start<=end)
        {
            if(start==end)
            {
                ans++;
                break;
            }
            
            else if(people[start]+people[end]<=limit)
            {
                ans++;
                start++;
                end--;
            }
            else
            {
                ans++;
                end--;    
            }
        }
    return ans;
    }
};

  
        
