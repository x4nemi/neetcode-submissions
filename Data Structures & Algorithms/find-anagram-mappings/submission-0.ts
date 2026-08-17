class Solution {
    /**
     * @param {number[]} nums1
     * @param {number[]} nums2
     * @return {number[]}
     */
    anagramMappings(nums1: number[], nums2: number[]): number[] {
        const map = new Map<number, Array<number>>();
        const result = new Array<number>();
        
        for(let i = 0; i < nums2.length; i++) {
            if(map.has(nums2[i])){
                map.set(nums2[i], [...map.get(nums2[i]), i]);
            } else map.set(nums2[i], [i]);
        }

        nums1.forEach(num => {
            result.push(map.get(num)[map.get(num).length - 1]);
            map.get(num).pop();
        })

        return result;
    }
}
