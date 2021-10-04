class Solution {
public:
    string reverseWords(string s) {
        stack<char>stk;
        int  k=0;
        for (int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                stk.push(s[i]);
                continue;    
            }
            else
            {
                while(!stk.empty() )
                {
                    s[k]=stk.top();
                    stk.pop();
                    k++;
                }
                k=i+1;
            }
        }
        while(!stk.empty())
        {
            s[k]=stk.top();
            stk.pop();
            k++;
        }
        return s;
    }
};
