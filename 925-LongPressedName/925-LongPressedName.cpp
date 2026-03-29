// Last updated: 30/03/2026, 00:34:22
1class Solution {
2public:
3    bool isLongPressedName(string name, string typed) {
4    int i = 0, j = 0;
5
6    while (j < typed.size()) {
7        if (i < name.size() && name[i] == typed[j]) {
8            i++;
9            j++;
10        }
11        else if (j > 0 && typed[j] == typed[j - 1]) {
12            j++;  // long press
13        }
14        else {
15            return false;
16        }
17    }
18
19    return i == name.size();
20}
21};