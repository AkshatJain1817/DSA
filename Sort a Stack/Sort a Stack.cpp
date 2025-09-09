class Solution {
public:
    void sortStack(stack<int> &st) {
        if(!st.empty()){
            int top=st.top();
            st.pop();

            sortStack(st);

            insert(st, top);
        }
    }

    void insert(stack<int> &st, int x){
        if(st.empty()||st.top()<x){
            st.push(x);
        }else{
            int temp=st.top();
            st.pop();
            insert(st, x);
            st.push(temp);
        }
    }
};
