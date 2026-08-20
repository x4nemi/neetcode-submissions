class Solution {
    /**
     * @param {string} s
     * @return {boolean}
     */
    canPermutePalindrome(s: string): boolean {
        const map = new Map<string,number>()
        var odd = 0;

        for(let i = 0; i < s.length; i++){
            map.set(s[i],
                map.has(s[i]) ?
                    map.get(s[i]) + 1 :
                    1
            )
        }

        map.forEach((val, key) => {
            if(val % 2 > 0) odd++;
            console.log(key, val, val % 2)
        })
            if(odd > 1) return false;

        return true
    }
}
