class Solution {
public:
    void reverseStack(stack<int> &st) {
        if(st.empty()) return;

        int top=st.top();
        st.pop();

        reverseStack(st);

        insertatBottom(st, top);
    
    }
private:
    void insertatBottom(stack<int> &st, int x){
        if(st.empty()){
            st.push(x);
            return;
        }
        int top=st.top();
        st.pop();

        insertatBottom(st, x);

        st.push(top);
    }
};
