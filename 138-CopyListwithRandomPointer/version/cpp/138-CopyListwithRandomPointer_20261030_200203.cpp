// Last updated: 10/30/2026, 8:02:03 PM
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* next;
7    Node* random;
8    
9    Node(int _val) {
10        val = _val;
11        next = NULL;
12        random = NULL;
13    }
14};
15*/
16
17class Solution {
18public:
19    Node* copyRandomList(Node* head) {
20         Node* temp=head;
21        
22         while(temp!=NULL){
23              Node* copyNode=new Node(temp->val);
24             copyNode->next=temp->next;
25             temp->next=copyNode;
26             temp=temp->next->next;
27         }
28         temp=head;
29         while(temp!=NULL){
30            Node* copyNode=temp->next;
31            if(temp->random)copyNode->random=temp->random->next;
32
33
34            else 
35            copyNode->random=nullptr;
36            temp=temp->next->next;
37         }
38         Node* dummy=new Node(-1);
39         Node* res=dummy;
40         temp=head;
41         while(temp!=NULL){
42            res->next=temp->next;
43            temp->next=temp->next->next;
44            res=res->next;
45            temp=temp->next;
46         }
47    return dummy->next;}
48};