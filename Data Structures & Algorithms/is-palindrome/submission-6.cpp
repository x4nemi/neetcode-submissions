class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;

        while (l < r) {
            // Move left pointer to next alphanumeric character
            while (l < r && !isalnum(s[l])) {
                l++;
            }

            // Move right pointer to previous alphanumeric character
            while (l < r && !isalnum(s[r])) {
                r--;
            }

            // Compare characters case-insensitively
            if (tolower(s[l]) != tolower(s[r])) {
                return false;
            }

            l++;
            r--;
        }

        return true;
    }
};
