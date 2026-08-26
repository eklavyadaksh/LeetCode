// Last updated: 8/26/2026, 11:40:18 PM
1class Solution {
2public:
3    long long cnt = 0;
4
5    void merge(vector<int>& arr, int left, int mid, int right) {
6        int n1 = mid - left + 1;
7        int n2 = right - mid;
8
9        vector<int> L(n1), R(n2);
10
11        for (int i = 0; i < n1; i++)
12            L[i] = arr[left + i];
13
14        for (int j = 0; j < n2; j++)
15            R[j] = arr[mid + 1 + j];
16
17        int i = 0, j = 0, k = left;
18
19        while (i < n1 && j < n2) {
20            if (L[i] <= R[j]) {
21                arr[k++] = L[i++];
22            } else {
23                arr[k++] = R[j++];
24            }
25        }
26
27        while (i < n1)
28            arr[k++] = L[i++];
29
30        while (j < n2)
31            arr[k++] = R[j++];
32    }
33
34    void countpairs(vector<int>& arr, int left, int mid, int right) {
35        int right1 = mid + 1;
36
37        for (int i = left; i <= mid; i++) {
38            while (right1 <= right &&
39                   (long long)arr[i] > 2LL * arr[right1]) {
40                right1++;
41            }
42
43            cnt += right1 - (mid + 1);
44        }
45    }
46
47    void mergeSort(vector<int>& arr, int left, int right) {
48        if (left >= right)
49            return;
50
51        int mid = left + (right - left) / 2;
52
53        mergeSort(arr, left, mid);
54        mergeSort(arr, mid + 1, right);
55
56        countpairs(arr, left, mid, right);
57        merge(arr, left, mid, right);
58    }
59
60    int reversePairs(vector<int>& nums) {
61        cnt = 0;
62
63        mergeSort(nums, 0, nums.size() - 1);
64
65        return (int)cnt;
66    }
67};