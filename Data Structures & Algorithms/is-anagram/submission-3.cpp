class Solution {
public:
    bool isAnagram(string s, string t) {
       if (s.size() != t.size()) return false;
       unordered_map<char,int>s_map;
       for(int i =0; i<s.size(); ++i){
        s_map[s[i]]++;
       }
        for(int i =0; i<t.size(); ++i){
        if(!s_map[t[i]]){
            return false;
        }
        s_map[t[i]]--;
       }
       return true;

    }
};