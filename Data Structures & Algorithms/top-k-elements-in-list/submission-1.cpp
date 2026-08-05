class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        map<int,int> m;
        vector<pair<int,int>> v;

        for(int n : nums) {
            m[n]++;
        }

        for( auto x : m) {
            v.push_back(x);
        }

        std::sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
        });

        while(k--) {
            cout << v.back().first << endl;
            res.push_back(v.back().first);
            v.pop_back();
        }

        return res;
    }
};
