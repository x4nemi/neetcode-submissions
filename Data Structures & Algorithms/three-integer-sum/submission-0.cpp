class Solution {
public:
    bool isUsedOnce(map<int,int>& m, vector<int> keys){
        map<int,int> m2;
        for(int k : keys) m2[k]++;

        for(int k : keys){
            if(m2[k] > m[k]) return false;
        }

        return true;
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        map<int,int> m;
        vector<vector<int>> res;
        for(int n : nums) m[n]++;

        for(int i=0; i < nums.size(); i++) {
            int target = -nums[i];
            int left = i + 1, right = nums.size() - 1;
            if (i > 0 && nums[i] == nums[i - 1]) continue; 
            while (left < right) {
                int sum = nums[left] + nums[right];
                if (sum == target) {
                    res.push_back({nums[i], nums[left], nums[right]});
    left++;
    right--;
    
    // Now skip duplicates AFTER moving
    while (left < right && nums[left] == nums[left - 1]) {
        left++;
    }
    while (left < right && nums[right] == nums[right + 1]) {
        right--;
    }
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }      

        return res;
        // int l = 0, r = nums.size() - 1;
        // while(l < r){
        //     if(m.count(-(nums[i] + nums[i])) > 0){
                
        //     }
        // }
    }
};

//-4,-1,-1,0,1,2
//-6,-2,-1,0,1,2

