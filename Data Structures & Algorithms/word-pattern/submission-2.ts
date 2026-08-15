class Solution {
    /**
     * @param {string} pattern
     * @param {string} s
     * @return {boolean}
     */
    wordPattern(pattern: string, s: string): boolean {
        const map = new Map<string,string>()
        const visited = new Set<string>()
        const words = s.split(" ");

        if(pattern.length != words.length) return false;

        for(let i = 0; i < pattern.length ; i++){
            if((map.has(pattern[i]) && map.get(pattern[i]) != words[i])){
                return false;
            }
            else if(!map.has(pattern[i]) && visited.has(words[i]))
                return false;
            map.set(pattern[i], words[i]);
            visited.add(words[i])
        }

        return true;
    }
}
