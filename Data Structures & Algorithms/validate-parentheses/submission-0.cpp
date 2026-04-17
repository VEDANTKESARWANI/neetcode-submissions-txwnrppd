class Solution {
public:
    bool isValid(string s) {
        if(s.size()==0)
        {
            return true;
        }
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
             if(st.empty() and (s[i]==']' or s[i]=='}' or s[i]==')'))
             {
                return false;
             }
             else if (!st.empty() and ((st.top()=='[' and (s[i]==')' or s[i]=='}'  )) or (st.top()=='(' and (s[i]==']' or s[i]=='}'  )) or (st.top()=='{' and (s[i]==')' or s[i]==']'  ))))
             {
                return false;
             }

            else if ((!st.empty() and ((st.top()=='[' and s[i]==']') or (st.top()=='(' and s[i]==')') or (st.top()=='{' and  s[i]=='}'))))
             {
                st.pop();
                continue;
             }
          st.push(s[i]);
             

        }
        if(st.empty())
        {
            return true;
        }
        return false;

     
    }
};
