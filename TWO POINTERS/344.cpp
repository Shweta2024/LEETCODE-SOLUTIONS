/*
344. Reverse String

https://leetcode.com/problems/reverse-string/

`Intuition:`- Taking 2 pointers start=0 & end=s.size()-1 , and swaping the values at index start & end till start is less than end.

1. TC=O(n)
2. SC=O(1)

*/

class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int start=0;
        int end=s.size()-1;
        
        while(start<end)
        {
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
};