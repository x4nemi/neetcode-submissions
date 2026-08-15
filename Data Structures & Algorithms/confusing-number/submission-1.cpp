class Solution {
public:
    bool confusingNumber(int n) {
        string original = to_string(n), confusing = "";

        int i = original.size() - 1;

        while(i >= 0) {
            if(original[i] == '6') confusing += '9';
            else if(original[i] == '9') confusing += '6';
            else if(original[i] == '8') confusing += '8';
            else if(original[i] == '0') confusing += '0';
            else if(original[i] == '1') confusing += '1';
            else return false;//confusing += original[i];
            i--;
        }

        cout << original << " - " << confusing << endl;

        return original != confusing;
    }
};
