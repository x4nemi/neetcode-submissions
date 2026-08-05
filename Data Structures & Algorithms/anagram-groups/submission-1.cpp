class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<int, int> m;
        map<string, vector<string>> storage;
        for(string s : strs) {
            string tmp = s;
            sort(tmp.begin(), tmp.end());

            storage[tmp].push_back(s);
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
