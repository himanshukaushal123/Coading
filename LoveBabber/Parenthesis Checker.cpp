 bool ispar(string x)
    {
        // Your code here
        stack<char>st;
        for(auto i:x){
        if(i=='{' || i=='(' || i=='[') st.push(i);
        else if(st.empty())return false;
        else if(((st.top()=='{' && i=='}')||(st.top()=='(' && i==')')|| (st.top()=='[' && i==']'))&& !st.empty()) st.pop();
        else st.push(i);
        }
        if(st.empty()==0)return false;
        return true;
    }
