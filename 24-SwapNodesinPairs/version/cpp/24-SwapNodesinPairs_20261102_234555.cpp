// Last updated: 11/2/2026, 11:45:55 PM
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
13    ListNode* swapPairs(ListNode* head) {
14        
15        if (!head || !head->next) return head;
16        
17  
18        ListNode* first = head;
19        ListNode* second = head->next;
20        
21  
22        first->next = swapPairs(second->next);
23        second->next = first;
24        
25   
26        return second;
27    }
28};
29