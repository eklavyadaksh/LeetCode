// Last updated: 10/15/2026, 8:32:59 PM
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
11
12class Solution {
13public:
14    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
15        ListNode* ptr1 = l1;
16        ListNode* ptr2 = l2;
17
18        ListNode* head = new ListNode(0);
19        ListNode* tail = head;
20        int carry = 0;
21
22        while (ptr1 != NULL || ptr2 != NULL || carry != 0) {
23            int sum = carry;
24
25            if (ptr1 != NULL) {
26                sum += ptr1->val;
27                ptr1 = ptr1->next;
28            }
29
30            if (ptr2 != NULL) {
31                sum += ptr2->val;
32                ptr2 = ptr2->next;
33            }
34
35            carry = sum / 10;
36            tail->next = new ListNode(sum % 10);
37            tail = tail->next;
38        }
39
40        ListNode* result = head->next;
41        delete head;
42
43        return result;
44    }
45};
46