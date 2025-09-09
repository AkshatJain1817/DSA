void sortStack(stack<int>& st) {
    if (!st.empty()) {
        int top = st.top();
        st.pop();

        // Sort remaining stack
        sortStack(st);

        // Insert top element back in sorted order
        insertInSortedOrder(st, top);
    }
}

void insertInSortedOrder(stack<int>& st, int x) {
    // If stack is empty OR top element is smaller than x
    // (since we want descending order, larger elements should be on top)
    if (st.empty() || st.top() < x) {
        st.push(x);
    } else {
        int temp = st.top();
        st.pop();
        insertInSortedOrder(st, x);
        st.push(temp);
    }
}
