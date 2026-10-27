// Last updated: 10/27/2026, 8:40:40 PM
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
14ListNode* reverse(ListNode* head) {
15    ListNode* prev = nullptr;
16    ListNode* curr = head;
17    ListNode* next = nullptr;
18
19    while (curr != nullptr) {
20        next = curr->next; 
21        curr->next = prev;  
22        prev = curr;       
23        curr = next;       
24    }
25    
26    return prev; 
27}
28   ListNode* findkth(ListNode* temp,int k){
29    k-=1;
30    while(temp!=NULL && k>0){
31        k--;
32        temp=temp->next;
33    }
34    return temp;
35   }
36    ListNode* reverseKGroup(ListNode* head, int k) {
37        if (head == nullptr || k <= 1) return head;
38        
39                ListNode* prevNode=nullptr;
40        ListNode* temp = head;
41         while(temp!=NULL){
42            ListNode* kth=findkth(temp,k);
43            if(kth==NULL){
44                if(prevNode)
45                prevNode->next=temp;
46                break;
47            }
48          ListNode*  nextNode=kth->next;
49            kth->next=NULL;
50            reverse(temp);
51            if(temp==head)head=kth;
52            else{
53                prevNode->next=kth;
54            }
55
56           prevNode=temp;
57            temp=nextNode;
58
59
60
61         }
62  return head;  }
63};
64