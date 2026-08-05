// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
public:
    void merge(vector<Pair>& arr, int s, int m, int e){
        vector<Pair> L = {arr.begin() + s, arr.begin() + m + 1};
        vector<Pair> R = {arr.begin() + m + 1, arr.begin() + e + 1};

        int i = 0, j = 0, k = s;

        while(i < L.size() and j < R.size()){
            if(L[i].key <= R[j].key)
                arr[k] = L[i++];
            else    
                arr[k] = R[j++];
            k++;
        }

        while(i < L.size())
            arr[k++] = L[i++];
        
        while(j < R.size())
            arr[k++] = R[j++];
    }

    vector<Pair> mergeSort(vector<Pair>& pairs) {
        vector<Pair> res = mergeSortChido(pairs, 0, pairs.size() - 1);

        return res;
    }
    
    vector<Pair> mergeSortChido(vector<Pair>& pairs, int s, int e) {
        if(e - s + 1 <= 1) return pairs;

        int m = (s+e)/2;
        mergeSortChido(pairs, s, m);
        mergeSortChido(pairs, m+1, e);

        merge(pairs, s, m, e);

        return pairs;
    }


};
