/*

1876. Substrings of Size Three with Distinct Characters

https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/


Intuition :-
1. Generating all the possible substrings of string of size 3 and then pushing them in a vector.
2. Followed by traversing all the values of the vector & inserting them in a set.
3. If size of set==3,this implies that there wasn't any repeating character.
So its a good string .Therefore increment ans.
4. Finally return ans.

#s.substr ( i  ,len ) -->it generates substrings of string s , starting from  i th index of size len
2. TC=O(n)
3. SC=O(n)
*/

class Solution {
public:
    int countGoodSubstrings(string s)
    {
        int n=s.size();
        vector<string>v;
        for(int i=0;i<n-2;i++)
        {
            string st=s.substr(i,3);//i->starting position & j->length of sub-string
            //if(st.size()==3)
                v.push_back(st);
        }
        //v=["xyz", "yzz", "zza","zaz"]
        
        int ans=0;
        for(auto i:v)//i="xyz"/i="yzz"/i="zza"/i="zaz"
        {
            set<char>c;
            for(auto j:i)
                c.insert(j); //c=['x','y','z']/c=['y','z']/c=['z','a']/c=['z','a']
            if(c.size()==3)
                ans++;
        }
    return ans;
    }
};
