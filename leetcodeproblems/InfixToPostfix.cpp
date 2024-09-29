int priority(char a)
    {
        switch(a)
        {
            case '+':
            case '-':
                return 1;
            case '*':
            case '/':
                return 3;
            case '^':
                return 4;
            default:
                return -1; // for other cases like '('
        }
    }
    
    string infixToPostfix(string s) {
        string ans = "";  // Initialize ans as an empty string
        stack<char> st;   // Stack to store operators
        int n = s.length();
        
        for (int i = 0; i < n; i++)
        {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
            {
                // If the character is an operand, add it to the result
                ans += s[i];
            }
            else if (s[i] == '(')
            {
                // If the character is '(', push it to the stack
                st.push(s[i]);
            }
            else if (s[i] == ')')
            {
                // If the character is ')', pop and add to result until '(' is encountered
                while (!st.empty() && st.top() != '(')
                {
                    ans += st.top();
                    st.pop();
                }
                if (!st.empty())
                    st.pop();  // Pop '(' from the stack
            }
            else
            {
                // Operator encountered
                while (!st.empty() && priority(s[i]) <= priority(st.top()))
                {
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);  // Push the current operator onto the stack
            }
        }
        
        // Pop remaining elements from the stack
        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        
