// Last updated: 10/13/2026, 7:16:04 PM
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
13    ListNode* deleteMiddle(ListNode* head) {
14         ListNode* ptr=head;
15        int len=0,count=0;
16        while(ptr!=NULL){
17            len++;
18            ptr=ptr->next;
19        }
20         if (len == 1) {
21            return nullptr;
22        }
23         ListNode* curr=head;
24             for (int i = 0; i < len/2-1; i++) {
25            curr = curr->next;
26        }
27        curr->next = curr->next->next;
28   return head; 
29   }
30};