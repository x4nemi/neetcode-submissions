class Solution {
    /**
     * @param {number[]} nums
     * @return {number}
     */
    largestUniqueNumber(nums: number[]): number {
        const map = new Map<number, number>();

        nums.forEach(num => map.set(num, map.has(num) ? map.get(num) + 1 : 1))

        let result = -1;
        for(let i = 0; i < nums.length; i++) {
            if(map.get(nums[i]) == 1) result = Math.max(nums[i], result);
        }

        return result;
    }
}
