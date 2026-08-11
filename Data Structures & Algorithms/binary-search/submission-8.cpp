class Solution {
public:
    int search(vector<int>& nums, int target) {
        // if(nums.size() == 1 and nums[0] != target) return -1;
        int L = 0, R = nums.size() - 1;

        while (L <= R) {
            int mid = (L + R) / 2;
            cout << L << " " << mid << " " << R << endl; 
            if (target > nums[mid]) {
                L = mid + 1;
            } else if (target < nums[mid]) {
                R = mid - 1;
            } else {
                return mid;
            }
        }
        return -1;
        
    }
};
