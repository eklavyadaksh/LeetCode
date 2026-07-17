// Last updated: 7/17/2026, 3:29:25 PM
1class Solution {
2public:
3    int secondsBetweenTimes(string startTime, string endTime) {
4     
5    int start = toSeconds(startTime);
6    int end = toSeconds(endTime);
7    
8     if(end>=start)
9         return end-start;
10     else
11         return 86400 - start + end;
12    }
13    int toSeconds(string time) {
14    int hours = stoi(time.substr(0, 2));
15    int minutes = stoi(time.substr(3, 2));
16    int seconds = stoi(time.substr(6, 2));
17
18    return hours * 3600 + minutes * 60 + seconds;
19}
20};