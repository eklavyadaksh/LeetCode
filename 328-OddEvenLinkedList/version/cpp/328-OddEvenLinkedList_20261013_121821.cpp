// Last updated: 10/13/2026, 12:18:21 PM
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
16        ListNode* odd=head;
17        ListNode* even=head->next;
18        ListNode* EvenHead=head->next;
19       while (even && even->next){
20
21            odd->next=odd->next->next;
22            odd=odd->next;
23      
24            even->next=even->next->next;
25            even=even->next;
26           
27
28
29        }
30odd->next = EvenHead;
31    
32   return head; }
33};