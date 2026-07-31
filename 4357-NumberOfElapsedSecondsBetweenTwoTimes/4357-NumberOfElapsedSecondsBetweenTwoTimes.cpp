// Last updated: 7/31/2026, 7:22:15 PM
class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
     
    int start = toSeconds(startTime);
    int end = toSeconds(endTime);
    
     if(end>=start)
         return end-start;
     else
         return 86400 - start + end;
    }
    int toSeconds(string time) {
    int hours = stoi(time.substr(0, 2));
    int minutes = stoi(time.substr(3, 2));
    int seconds = stoi(time.substr(6, 2));

    return hours * 3600 + minutes * 60 + seconds;
}
};