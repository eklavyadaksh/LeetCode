// Last updated: 10/13/2026, 11:36:02 AM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13
14    ListNode* oddEvenList(ListNode* head) {
15        if (head == nullptr) return head;            
16    ListNode* current = head;
17    vector<int> res;
18    
19    while (current && current->next) {
20         res.push_back(current->val);
21        current = current->next->next;
22    }
23    if(current)res.push_back(current->val);
24    current=head->next;
25   
26     while (current && current->next) {
27         res.push_back(current->val);
28        current = current->next->next;
29    }
30    if(current)res.push_back(current->val);
31    int i=0;
32    current=head;
33    while(current!= NULL){
34        current->val=res[i];
35        i++;
36        current=current->next;
37    }
38
39                
40    
41   return head; }
42};