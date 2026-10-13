// Last updated: 10/13/2026, 9:01:06 PM
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
13    ListNode* findmiddle(ListNode* head) {
14        ListNode* slow = head;
15        ListNode* fast = head;
16
17        while (fast->next != nullptr && fast->next->next != nullptr) {
18            slow = slow->next;
19            fast = fast->next->next;
20        }
21        return slow;
22    }
23
24    ListNode* merge(ListNode* head1, ListNode* head2) {
25        ListNode dummy(0);
26        ListNode* tail = &dummy;
27
28        while (head1 != nullptr && head2 != nullptr) {
29            if (head1->val <= head2->val) {
30                tail->next = head1;
31                head1 = head1->next;
32            } else {
33                tail->next = head2;
34                head2 = head2->next;
35            }
36            tail = tail->next;
37        }
38        tail->next = (head1 != nullptr) ? head1 : head2;
39        return dummy.next;
40    }
41
42    ListNode* sortList(ListNode* head) {
43        if (head == nullptr || head->next == nullptr) return head;
44
45        ListNode* middle = findmiddle(head);
46        ListNode* righthead = middle->next;
47        middle->next = nullptr;
48
49        ListNode* left = sortList(head);
50        ListNode* right = sortList(righthead);
51
52        return merge(left, right);
53    }
54};