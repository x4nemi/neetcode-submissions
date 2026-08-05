class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> m;

        for(char c : s) m[c]++;
        for(char c : t) {
            if(m.count(c) == 0) return false;
            m[c]++;
        
        }

        for(auto x : m) if(x.second % 2 != 0) return false;

        return true;
    }
};
