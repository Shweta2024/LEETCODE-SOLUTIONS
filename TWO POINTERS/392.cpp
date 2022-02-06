/*

392. Is Subsequence

https://leetcode.com/problems/is-subsequence/

Intuition :-Take 2 pointers ps & pt for the string s & t respectively.If the character at ps eqauls to the character at pt then increment both ps & pt by 1. If they aren't equal then increment pt. If ps = s.size() then return true => because this implies that we were able to find all the characters of s in t in without disturbing the relative position of the remaing characters. Else return false.

TC=O(n)
SC=O(1)
*/
class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        int ps=0,pt=0;
        
        if(s=="" && t=="") return true;
        for(int i=0;i<t.size();i++)
        {
            if(s[ps]==t[pt])
            {
                ps++;
                pt++;
            }
            else
                pt++;
            
            
            if(ps==s.size()) return true;
                
        }
        return false;
    }
};