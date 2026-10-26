// Last updated: 10/26/2026, 11:32:23 PM
1
2/**
3 * Definition for singly-linked list.
4 * struct ListNode {
5 *     int val;
6 *     ListNode *next;
7 *     ListNode() : val(0), next(nullptr) {}
8 *     ListNode(int x) : val(x), next(nullptr) {}
9 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
10 * };
11 */
12class Solution {
13public:
14    ListNode* reverseKGroup(ListNode* head, int k) {
15        if (head == nullptr || k <= 1) return head;
16
17        ListNode* temp = head;
18        ListNode* prev = nullptr;
19        ListNode* groupPrev = nullptr;
20        ListNode* start = head;
21
22        while (temp != nullptr) {
23            ListNode* check = temp;
24            int nodes = 0;
25
26            while (check != nullptr && nodes < k) {
27                check = check->next;
28                nodes++;
29            }
30
31            if (nodes < k)
32                break;
33ListNode* nextGroup = check;
34        prev = nextGroup;
35            ListNode* curr = start;
36            ListNode* next = nullptr;
37            
38
39            while (curr != nextGroup) {
40                next = curr->next;
41                curr->next = prev;
42                prev = curr;
43                curr = next;
44            }
45
46            if (groupPrev != nullptr)
47                groupPrev->next = prev;
48            else
49                head = prev;
50
51            groupPrev = start;
52            start = nextGroup;
53            temp = start;
54        }
55
56        return head;
57    }
58};
59