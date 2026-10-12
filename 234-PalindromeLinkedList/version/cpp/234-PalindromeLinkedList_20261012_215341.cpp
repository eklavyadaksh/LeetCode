// Last updated: 10/12/2026, 9:53:41 PM
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
13    bool isPalindrome(ListNode* head) {
14        ListNode* fast=head;
15        ListNode* slow=head;
16        while(fast && fast->next){
17            slow=slow->next;
18            fast=fast->next->next;
19          
20        }
21        ListNode* prev = NULL;
22    ListNode* curr = slow;
23    ListNode* next = NULL;
24
25
26        while(curr!=NULL){
27         next = curr->next;
28          curr->next = prev;
29          prev = curr;
30          curr = next;
31  }
32  ListNode* first = head;
33ListNode* second = prev;
34
35while (second != NULL) {
36    if (first->val != second->val) {
37        return false;
38    }
39    first = first->next;
40    second = second->next;
41}
42return true;}
43  
44 
45};