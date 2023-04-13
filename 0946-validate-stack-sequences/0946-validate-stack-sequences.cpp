class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int p = 0;
        for (int i : pushed) {
            st.push(i);
            while (!st.empty() && st.top() == popped[p]) {
                st.pop();
                p++;
            }
        }
        return st.empty();
    }
};