class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isOneEditDistance(s: string, t: string): boolean {
        if (Math.abs(s.length - t.length) > 1) return false;
        if (s === t) return false;

        if (s.length > t.length) {
            [s, t] = [t, s];
        }

        for (let i = 0; i < s.length; i++) {
            if (s[i] !== t[i]) {
                if (s.length === t.length) {
                    return s.substring(i + 1) === t.substring(i + 1);
                } else {
                    return s.substring(i) === t.substring(i + 1);
                }
            }
        }

        return s.length + 1 === t.length;
    }
}
