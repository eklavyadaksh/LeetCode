// Last updated: 10/30/2026, 7:42:33 PM
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
21         unordered_map<Node*,Node*> mp;
22         while(temp!=NULL){
23              Node* newNode=new Node(temp->val);
24              mp[temp]=newNode;
25              temp=temp->next;
26         }
27         temp=head;
28         while(temp!=NULL){
29            Node* copyNode=mp[temp];
30            copyNode->next=mp[temp->next];
31            copyNode->random=mp[temp->random];
32            temp=temp->next;
33         }
34    return mp[head];}
35};