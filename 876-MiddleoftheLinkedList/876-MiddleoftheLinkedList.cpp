// Last updated: 6/20/2026, 7:13:39 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode *detectCycle(ListNode *head) {
12        ListNode* slow=head;
13        ListNode* fast=head;
14        while(fast && fast->next){
15            slow=slow->next;
16            fast=fast->next->next;
17
18            if(slow==fast){
19                ListNode* ptr=head;
20                while(ptr!=slow){
21                ptr = ptr->next;
22                slow = slow->next;
23                
24                }
25                return ptr;
26            }
27             
28        }
29        
30   return NULL; }
31};