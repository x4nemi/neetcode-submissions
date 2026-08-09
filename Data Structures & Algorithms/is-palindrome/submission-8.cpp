class Solution {
public:
    bool isALetter(char c) {
        return (c >= 'a' and c <= 'z') or (c >= 'A' and c <='Z') or (c >= '0' and c<= '9');
    }

    bool areEqual(char a, char b) {
        return tolower(a) == tolower(b);
    }

    bool isPalindrome(string s) {
        int i = 0, j = s.size()-1;

        // if(s.size() == 2 and !areEqual(s[0], s[1])) return false;

        while(i<=j) {
            cout << s[i] << " " << s[j] << endl;
            if(!isALetter(s[i])) {
                cout << s[i] << endl;
                i++;
                continue;
            }
            if(!isALetter(s[j])) {
                j--; 
                continue;
            }

            if(!areEqual(s[i], s[j])) return false;

            i++; j--;
        }

        return true;
    }
};
