class Solution {
    /**
     * @param {string} s
     * @return {number}
     */
    lengthOfLastWord(s: string): number {
        const arr = s.split(' ').filter(w => w.length > 0)
        console.log(arr);

        return arr[arr.length - 1].length;
    }
}
