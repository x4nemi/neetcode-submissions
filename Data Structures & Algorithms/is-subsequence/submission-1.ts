class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isSubsequence(s: string, t: string): boolean {
        let i = 0, j = 0;

        if(s.length > t.length)
            return false;
        //     [s, t] = [t, s]

        

        while(i < s.length && j < t.length) {
            if(s[i] != t[j]) j++;
            else i++, j++;
        }

        console.log(i, j);

        return i == s.length;
    }
}
