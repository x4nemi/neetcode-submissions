class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m;
        // for(int i = 0; i < nums2.size(); i++) {
        //     if(i == nums2.size() - 1) m[nums2[i]] = -1;
        //     else
        //         m[nums2[i]] = (nums2[i+1] > nums2[i] ? nums2[i+1] : -1);
        // }

        vector<int> res;
        int mx = 0;
        for(int i = nums2.size() - 1; i >= 0; i--){
            mx = max(nums2[i],mx);
            if(i == nums2.size() - 1) m[nums2[i]] = -1;
            else {
                m[nums2[i]] = mx == nums2[i] ? -1 : (nums2[i+1] > nums2[i] ? nums2[i+1] : mx);
            }
            cout << mx << endl;
        }
        for(int n : nums1) res.push_back(m[n]);

        return res;

    }
};