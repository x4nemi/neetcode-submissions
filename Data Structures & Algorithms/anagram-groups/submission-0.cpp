class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<int, int> m;
        map<int, vector<string>> storage;
        for(string s : strs) {
            int sum = 0;
            for(char c : s) {
                sum += c - '0';
            }
            storage[sum].push_back(s);
            m[sum]++;
        }

        for(auto x : storage) {
            cout << x.first << endl;
            vector<string> v;
            for(string s : x.second){
                cout << s << endl;
                v.push_back(s);
            }
            res.push_back(v);
            cout << endl;
        }

        return res;
    }
};
