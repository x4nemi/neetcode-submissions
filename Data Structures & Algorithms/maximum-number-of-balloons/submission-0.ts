class Solution {
    /**
     * @param {string} text
     * @return {number}
     */
    maxNumberOfBalloons(text: string): number {
        const map = new Map<string,number>();
        for(let i = 0; i < text.length; i++){
            map.set(text[i], map.has(text[i]) ? map.get(text[i]) + 1 : 1);
        }

        var result = map.get("b") || 0;
        result = Math.min(map.get("a"), result);
        result = Math.min(Math.floor(map.get("l") / 2), result);
        result = Math.min(Math.floor(map.get("o") / 2), result);
        result = Math.min(map.get("n"), result);

        return result || 0;
    }
}


// b : 2
// a : 1
// l : 3
// o : 4
// n : 1