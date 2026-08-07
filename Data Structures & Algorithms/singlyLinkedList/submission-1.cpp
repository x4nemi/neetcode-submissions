class LinkedList {
public:
    vector<int> arr;

    LinkedList() {
        arr.clear();
    }

    int get(int index) {
        return index < 0 || index >= (int)arr.size() ? -1 : arr[index];
    }

    void insertHead(int val) {
        arr.insert(arr.begin(), val);
    }
    
    void insertTail(int val) {
        arr.push_back(val);
    }

    bool remove(int index) {
        if(index < 0 || index > arr.size() - 1) {
            return false;
        }
        arr.erase(arr.begin() + index);
        return true;
    }

    vector<int> getValues() {
        return arr;
    }
};
