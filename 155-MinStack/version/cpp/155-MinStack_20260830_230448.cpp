// Last updated: 8/30/2026, 11:04:48 PM
1class MinStack {
2public:
3    stack<int> st;
4    stack<int> minSt;
5    MinStack() {
6        
7    }
8    
9    void push(int value) {
10        st.push(value);
11
12        if(minSt.empty() || value <= minSt.top()){
13            minSt.push(value);
14        }
15        
16    }
17    
18    void pop() {
19        if(st.top() == minSt.top()){
20            minSt.pop();
21        }
22        st.pop();
23        
24    }
25    
26    int top() {
27        return st.top();
28       
29        
30    }
31    
32    int getMin() {
33        return minSt.top();
34
35        
36        
37    }
38};
39
40/**
41 * Your MinStack object will be instantiated and called as such:
42 * MinStack* obj = new MinStack();
43 * obj->push(value);
44 * obj->pop();
45 * int param_3 = obj->top();
46 * int param_4 = obj->getMin();
47 */