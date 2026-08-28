// Last updated: 8/28/2026, 11:10:38 PM
1class MyStack {
2public:
3
4    queue<int> q;
5    MyStack() {    
6        
7    }
8    
9    void push(int x) {
10        q.push(x);
11        int n = q.size();
12        for(int i = 0; i<n-1; i++){
13            q.push(q.front());
14            q.pop();
15
16        }
17        
18    }
19    
20    int pop() {
21        int x= q.front();
22        q.pop();
23        return x;
24        
25    }
26    
27    int top() {
28        return q.front();
29        
30    }
31    
32    bool empty() {
33        return q.empty();
34        
35    }
36};
37
38/**
39 * Your MyStack object will be instantiated and called as such:
40 * MyStack* obj = new MyStack();
41 * obj->push(x);
42 * int param_2 = obj->pop();
43 * int param_3 = obj->top();
44 * bool param_4 = obj->empty();
45 */