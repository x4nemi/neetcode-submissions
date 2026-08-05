class DynamicArray {
public:
    int cap= 0;
    vector<int> arr;

    DynamicArray(int capacity) {
        cap = capacity;
        arr.reserve(capacity);
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        cap++;
        arr.push_back(n);
    }

    int popback() {
        cap--;
        int tmp = arr[arr.size()-1];
        arr.pop_back();
        return tmp;
    }

    void resize() {
        cap *= 2;
        arr.resize(cap * 2);
    }

    int getSize() {
        return (int)arr.size();
    }

    int getCapacity() {
        return arr.capacity();
    }
};
