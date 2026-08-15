class Solution {
public:
    string wordHorizontal(vector<string>& words, int index) {
        string r = "";
        for(int i = index; i < words.size(); i++){
            for(int j = index; j < words[i].size(); j++){
                r += words[i][j];
            }
        }
        return r;
    }
    
    string wordVertical(vector<string>& words, int index) {
        string r = "";
        for(int i = index; i < words.size(); i++){
            for(int j = index; j < words[i].size(); j++){
                r += words[j][i];
            }
        }
        return r;
    }
    bool validWordSquare(vector<string>& words) {
        for (int wordNum = 0; wordNum < words.size(); ++wordNum) {
            for (int charPos = 0; charPos < words[wordNum].size(); ++charPos) {
                // Check if charPos is beyond the number of rows (words)
                // OR wordNum is beyond the length of the charPos-th word
                // OR the characters don't match
                if (charPos >= words.size() || 
                    wordNum >= words[charPos].size() || 
                    words[wordNum][charPos] != words[charPos][wordNum]) {
                    return false;
                }
            }
        }
        return true;
    }
};
