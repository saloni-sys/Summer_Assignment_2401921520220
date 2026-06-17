class MinStack {
public:
    MinStack() {
        stack<pair<int,int>>st;
        
    }
      stack<pair<int,int>>st;
    void push(int value) {
        if(st.empty())
        st.push({value,value});

        else
        st.push({value,min(value,st.top().second)});
        
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {

        return st.top().second;
        
    }
};
