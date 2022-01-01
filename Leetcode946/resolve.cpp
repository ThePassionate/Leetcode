class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> stk;
        int push = 0, pop = 0;
        while (push < pushed.size()) {
            cout << pop << endl;
            while (push < pushed.size() && pushed[push] != popped[pop]) stk.push(pushed[push++]);
            pop++, push++;
            while (!stk.empty() && stk.top() == popped[pop]) {
                stk.pop();
                pop++;
            }
        }
        while (!stk.empty() && stk.top() == popped[pop++]) stk.pop();
        return stk.empty();
    }
};
