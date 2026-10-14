// Last updated: 10/14/2026, 9:53:06 AM
1
2
3class Solution {
4public:
5 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
6 ListNode* ptr1 = headA;
7 ListNode* ptr2 = headB;
8
9 while(ptr1 != ptr2){
10 if(ptr1 == NULL){
11 ptr1 = headB;
12 }
13 else{
14 ptr1 = ptr1->next;
15 }
16
17 if(ptr2 == NULL){
18 ptr2 = headA;
19 }
20 else{
21 ptr2 = ptr2->next;
22 }
23 }
24 return ptr1;
25 }
26};