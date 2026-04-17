class Solution {
public:
    int evalRPN(vector<string>& t) {
        int n = t.size();
        if (n == 0) {
            return 0;
        }
        stack<int> st;
        for (int i = 0; i < n; i++) {
        if (t[i] == "+" || t[i] == "-" || t[i] == "*" || t[i] == "/") {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                if (t[i] == "+")
                    st.push(a + b);
                if (t[i] == "-")
                    st.push(a - b);
                if (t[i] == "*")
                    st.push(a * b);
                if (t[i] == "/")
                    st.push(a / b);
            }
            else
            {
                int x = stoi(t[i]);
                st.push(x);
            }
        }
        return st.top();
    }
    
};
