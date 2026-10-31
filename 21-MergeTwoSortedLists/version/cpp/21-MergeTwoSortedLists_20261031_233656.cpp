// Last updated: 10/31/2026, 11:36:56 PM
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
13    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
14        ListNode* dummy=new ListNode(-1);
15        ListNode* res=dummy;
16        while(head1!=NULL && head2!=NULL){
17            if(head1->val<head2->val){
18                res->next=head1;
19                res=head1;
20                head1=head1->next;
21            }
22            else{
23                res->next=head2;
24                res=head2;
25                head2=head2->next;
26            }
27            res->next=NULL;
28
29       }
30       if(head1)res->next=head1;
31       else res->next=head2;
32       return dummy->next; 
33    }
34};