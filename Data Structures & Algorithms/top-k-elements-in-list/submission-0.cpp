class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        map<int,int> m;

        for(int n : nums) {
            m[n]++;
        }

        for(auto e = m.rbegin(); e != m.rend() and k > 0;++e, k--){
            res.push_back(e->first);
            cout << e->first << endl;
        }

        return res;
    }
};
