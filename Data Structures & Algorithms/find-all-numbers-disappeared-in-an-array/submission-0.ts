class Solution {
    /**
     * @param {number[]} nums
     * @return {number[]}
     */
    findDisappearedNumbers(nums: number[]): number[] {
        nums = nums.sort();

        const result = new Array<number>();
        const map = new Set<number>();

        nums.forEach(num => map.add(num));

        for(let i = 1; i <=nums.length; i++){
            if(!map.has(i)) result.push(i);
        }

        return result;
    }
}
