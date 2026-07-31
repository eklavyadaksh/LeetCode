// Last updated: 7/31/2026, 7:23:25 PM
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mp,window;
        for(auto x: s1){
            mp[x]++;
        }
        if(s1.length()>s2.length())
          return false;
      int left=0;
      int right=s1.length();
      for(int i=0;i<right;i++){
          window[s2[i]]++;
      }
      if(mp==window){
            return true;
        }
      
      for(int i=right;i<s2.length();i++){
        window[s2[i]]++;
        window[s2[i-right]]--;
        char ch = s2[i - right];
        if (window[ch] == 0)
           window.erase(ch);
        
      
        if(mp==window){
            return true;
        }
        
      }

    return false;}
};