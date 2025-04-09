#include <iostream>

class DynamicArray {
private:
    int* arr;
    int capacity;
    int n;

    void resize(int newCapacity) {
        int* temp = new int[newCapacity];
        for (int i = 0; i < n; i++)
            temp[i] = arr[i];
        delete [] arr;
        arr = temp;
        capacity = newCapacity;
    }
public:
    DynamicArray() : arr(nullptr), capacity(0), n(0) {}

    ~DynamicArray() {
        delete [] arr;
    }

    void push(int value) {
        if (n == capacity) {
            int newCapacity = (capacity == 0) ? 1 : capacity * 2;
            resize(newCapacity);
        }
        arr[n++] = value;
    }

    int& operator[](int index) {
        return arr[index];
    }

    int size() const {
        return n;
    }
};

int main() {
    DynamicArray vec;
    int value;

    std::cout << "Enter integers to add (enter -1 to stop):" << std::endl;
    while (true) {
        std::cin >> value;
        if (!std::cin) {
            break; 
        }
        if (value == -1) {
            break; 
        }
        vec.push(value);
    }
    
    std::cout << "Contents of the array:" << std::endl;
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
