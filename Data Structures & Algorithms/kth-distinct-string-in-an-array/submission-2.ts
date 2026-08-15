class Solution {
    /**
     * @param {string[]} arr
     * @param {number} k
     * @return {string}
     */
    kthDistinct(arr: string[], k: number): string {
        const map = new Map<string, number>();
        var result = "";
        arr.forEach(value => {
            if(map.has(value)) {
                map.set(value, map.get(value) + 1);
            } else {
                map.set(value, 1);
            }
        })

        for(var i = 0; i < arr.length; i++){
            let val = arr[i]
            if(map.get(val) == 1) k--;

            console.log(map.get(val), k);

            if(k == 0) {
                return val;
            }
        }

        return result;
    }
}
