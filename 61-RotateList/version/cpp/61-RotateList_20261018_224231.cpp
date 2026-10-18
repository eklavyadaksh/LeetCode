// Last updated: 10/18/2026, 10:42:31 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 **/
11class Solution {
12public:
13    ListNode* rotateRight(ListNode* head, int k) {
14        if (head == nullptr || head->next == nullptr || k == 0)
15            return head;
16
17        int n = 1;
18        ListNode* last = head;
19
20        while (last->next != nullptr) {
21            last = last->next;
22            n++;
23        }
24
25        k = k % n;
26        if (k == 0) return head;
27
28        last->next = head;
29
30        int steps = n - k;
31        ListNode* newLast = head;
32
33        for (int i = 1; i < steps; i++) {
34            newLast = newLast->next;
35        }
36
37        head = newLast->next;
38        newLast->next = nullptr;
39
40        return head;
41    }
42};