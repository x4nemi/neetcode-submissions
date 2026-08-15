class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> rightSum(nums.size() + 1, 0), leftSum(nums.size()+1, 0);

        for(int i = 1, j = nums.size() - 2; i < nums.size(); i++, j--){
            leftSum[i] += nums[i-1] + leftSum[i-1];
            rightSum[j] += nums[j+1] + rightSum[j+1];

            // cout << leftSum[i] << " " << rightSum[j] << endl;
        }

        for(int i = 0, j = nums.size() - 1; i < nums.size(); i++, j--){
            cout << leftSum[i] << " " << rightSum[i] << " -" << i << endl;
            if(leftSum[i] == rightSum[i]) return i;
        }

        return -1;
    }
};

// 0 1 8 11 17 22 28
// 28 27 20 17 11 6 0

// 0, 2, 3, 2
// 2, 0, -1, 0
// 0, -1, 0, 2