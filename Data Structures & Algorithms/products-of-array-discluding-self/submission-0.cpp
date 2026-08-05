class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums), right(nums), res;
        for(int i = 1, j = nums.size()-2; i < nums.size(); i++, j--) {
            left[i] = nums[i] * left[i-1];
            right[j] = nums[j] * right[j+1];
        }

            cout << left[nums.size()-2] << " " << right[1] << endl;
        for(int i = 0; i < nums.size(); i++) {
            if(i == 0){
                res.push_back(right[1]);
            }
            else if(i == nums.size() - 1){
                res.push_back(left[i-1]);
            }
            else
                res.push_back(left[i-1] * right[i+1]);
        }

        return res;
    }
};
// 1, 2, 8, 48
// 48, 48, 24, 6

// -1, 0, 0, 0, 0
// 0, 0, 6, 6, 3