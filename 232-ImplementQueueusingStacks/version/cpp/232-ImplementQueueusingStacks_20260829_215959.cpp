// Last updated: 8/29/2026, 9:59:59 PM
1class MyQueue {
2public:
3
4    stack<int> s1;
5    stack<int> s2;
6    MyQueue() {
7        
8    }
9    
10    void push(int x) {
11        s1.push(x);
12        
13    }
14    
15    int pop() {
16        if(s2.empty()){
17            while(!s1.empty()){
18                s2.push(s1.top());
19                s1.pop();
20            }
21
22        }
23        int x = s2.top();
24        s2.pop();
25
26        return x;
27        
28    }
29    
30    int peek() {
31        if(s2.empty()){
32            while(!s1.empty()){
33                s2.push(s1.top());
34                s1.pop();
35            }
36
37        }
38        return s2.top();
39        
40    }
41    
42    bool empty() {
43        return s1.empty() && s2.empty();
44        
45    }
46};
47
48/**
49 * Your MyQueue object will be instantiated and called as such:
50 * MyQueue* obj = new MyQueue();
51 * obj->push(x);
52 * int param_2 = obj->pop();
53 * int param_3 = obj->peek();
54 * bool param_4 = obj->empty();
55 */