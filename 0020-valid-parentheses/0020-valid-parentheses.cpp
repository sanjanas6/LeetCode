class Solution {
public:
    bool isValid(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(s.size()==0) return true;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='[') st.push(s[i]);
            else if((s[i]==')'||s[i]=='}'||s[i]==']')&&!st.empty()){
               char cur=st.top();
               if((cur=='('&&s[i]==')')||(cur=='{'&&s[i]=='}')||(cur=='['&&s[i]==']')) st.pop();
               else return false;            
            }else return false;
        }
        return st.empty();
    }
};