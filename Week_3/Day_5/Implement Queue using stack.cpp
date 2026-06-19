class MyQueue {
public:
    stack<int> input;
    stack<int> output;
    int peekel;

    MyQueue() {
        
    }

    void push(int x) {
        if (empty()) {
            peekel = x;
        }
        input.push(x);
    }

    int pop() {
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }

        int ans = output.top();
        output.pop();

        return ans;
    }

    int peek() {
        if (!output.empty()) {
            return output.top();
        }

        return peekel;
    }

    bool empty() {
        return input.empty() && output.empty();
    }
};
