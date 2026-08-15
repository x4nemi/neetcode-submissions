class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        map<string, int> m;
        for(string email : emails) {
            string s = "";
            int i = 0;
            bool atFound = false;
            while(i < email.size()){
                if(email[i] == '.' and !atFound) {
                    i++;
                    continue;
                }
                else if(email[i] == '+') {
                    while(email[i] != '@') ++i;
                    i--;
                    atFound = true;
                }
                else s += email[i];
                i++;
            }
            cout << s << endl;
            m[s]++;
        }
        return m.size();
    }
};