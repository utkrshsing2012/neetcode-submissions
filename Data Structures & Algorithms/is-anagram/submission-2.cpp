class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> ss;
        unordered_map<char, int> tt;
        if(s.size()!= t.size()) return false;
        for(int i = 0; i<s.size(); i++){
            ss[s[i]]++;
            tt[t[i]]++;
        }
        return (ss == tt);
    }
};
