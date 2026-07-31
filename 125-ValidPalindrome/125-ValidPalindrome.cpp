// Last updated: 7/31/2026, 7:24:14 PM
class Solution {
public:
    bool isPalindrome(string s) {
       
       int j = 0;
for(int i = 0; i < s.length(); i++){
    if(isalnum(s[i])){
        s[j++] = s[i];
    }
}
s.resize(j);
       for(int i = 0; i < s.length(); i++){
    s[i] = tolower(s[i]);
}
       string v = s; 
       reverse(v.begin(), v.end());
     
       if(v==s )
        return true;





        return false; }

        

    
};