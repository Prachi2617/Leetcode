/*The following are the terms from n=1 to n=10 of the count-and-say sequence:
 1.     1
 2.     11
 3.     21
 4.     1211
 5.     111221
 6.     312211
 7.     13112221
 8.     1113213211
 9.     31131211131221
10.     13211311123113112211
To generate the nth term, just count and say the n-1th term.
*/

class Solution {
public:
    string countAndSay(int n)
    {
        if(n==1)
            return "1";
        /*if(n==2)
            return "11";*/
        int i,c;
        string s="1";
        for(i=2;i<=n;i++)
        {
            string t="";
            s=s+'&';
            c=1;
            for(int j=1;j<s.length();j++)
            {
                if(s[j]!=s[j-1])
                {
                    t=t+to_string(c);
                    t=t+s[j-1];
                    c=1;
                }
                else
                    c++;
            }
            s=t;
        }
        return s;
    }
};
