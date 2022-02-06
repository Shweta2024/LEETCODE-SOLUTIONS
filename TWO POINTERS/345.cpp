/*

345. Reverse Vowels of a String

https://leetcode.com/problems/reverse-vowels-of-a-string/

Intuition :-Take 2pointers , start=0 & end=s.size()-1.
-If the characters at both start & end index are vowels then swap them.
-Else if , the character at start index is a vowel but the character at the end index isn't a vowel then decrement end.
-Else , if the character  at the end index is vowel but the one at the start index isn't a vowel then increment start.
-Return the string s.

1. TC=O(n)
2. SC=O(1)

NOTE :- while checking if the character is a vowel or not , consider a,e,i,o,u & A,E,I,O,U.
*/

class Solution {
public:
    string reverseVowels(string s) 
    {
        int start=0;
        int end=s.size()-1;
        
        while(start<end)
        {
            if((s[start]=='a'||s[start]=='e'||s[start]=='i'||s[start]=='o'||s[start]=='u'||s[start]=='A'||s[start]=='E'||s[start]=='I'||s[start]=='O'||s[start]=='U')&&(s[end]=='a'||s[end]=='e'||s[end]=='i'||s[end]=='o'||s[end]=='u'||s[end]=='A'||s[end]=='E'||s[end]=='I'||s[end]=='O'||s[end]=='U'))
            {
                swap(s[start],s[end]);
                start++;
                end--;
            }
            
            else if((s[start]=='a'||s[start]=='e'||s[start]=='i'||s[start]=='o'||s[start]=='u'||s[start]=='A'||s[start]=='E'||s[start]=='I'||s[start]=='O'||s[start]=='U')&&(s[end]!='a'||s[end]!='e'||s[end]!='i'||s[end]!='o'||s[end]!='u'||s[end]!='A'||s[end]!='E'||s[end]!='I'||s[end]!='O'||s[end]!='U'))
            {
                end--;
            }
            
            else 
                start++;
        }
     return s;
    }
};