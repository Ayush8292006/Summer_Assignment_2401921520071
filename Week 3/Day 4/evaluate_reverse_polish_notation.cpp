class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> st;

        for(int i=0; i<tokens.size();i++){
            string s=tokens[i];
            if(s=="+" || s=="-"|| s=="*"|| s=="/" ){
                int t1=st.top();
                st.pop();
                int t2=st.top();
                st.pop();
                

                if(s=="+"){
                    st.push(t1+t2);
                }else if(s=="-"){
                    st.push(t2 - t1);
                }
                else if(s=="*"){
                    st.push(t1*t2);
                }
                else if(s=="/"){
                    st.push(t2/t1);
                }
            }
            else{
                int num = stoi(s);
                st.push(num);
            }
        }

        return st.top();
    }
};