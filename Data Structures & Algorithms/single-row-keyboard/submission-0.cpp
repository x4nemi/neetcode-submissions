class Solution {
public:
    int calculateTime(string keyboard, string word) {
        map<char,int> charPos;

        for(int i = 0; i < keyboard.size(); i++){
            charPos[keyboard[i]] = i ;
        }

        int res = charPos[word[0]];
        for(int i = 1; i < word.size(); i++){
            res += abs(charPos[word[i]] - charPos[word[i-1]]);
        }

        return res;
    }
};
