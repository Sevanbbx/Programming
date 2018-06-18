#include <iostream>

class Vector {
private:
    int count;
    int size;
    int* arr;

public:
    Vector() {
        count = 0;
        size = 10;
        arr = new int[size];
        for(int i = 0; i < size; ++i) {
            arr[i] = -1; 
        }
    }
    
    void printVector() {
        for(int i = 0; i < size; ++i) {
            if(-1 == arr[i]) {
                continue;
            } else {
                std::cout << "Vector[" << i << "]=" << arr[i] << std::endl;
            }
        }
    }
    int getSize() {
        return size;
    }

    int* getArr() {
        return arr;
    }
    
    void setSize(int size) {
        this -> size = size;
    }
   
    void pushBack(const int el) {
        if(size == count) {
            size += 10;
            int* newArr = new int[size];
            for(int i = 0; i < size - 10; ++i) {
                newArr[i] = arr[i];
            }
            for(int i = count; i < size; ++i) {
                newArr[i] = -1;
            }
            delete[] arr;
            arr = newArr;
        }
        arr[count] = el;
        ++count;
    }

    void popBack() {
        if(count < 1) {
            std::cout << "ERROR: There is no elements to popBack. Try PushBack first." << std::endl;
        } else if(count < size - 10) {
            size -= 10;
            int* newArr = new int[size - 10];
            for(int i = 0; i < size; ++i) {
                newArr[i] = arr[i];
            }
            for(int i = count; i < size; ++i) {
                newArr[i] = -1;
            }
            delete[] arr;
            arr = newArr;
        }
	arr[count] = -1;
        --count;
    }

    void pushFront(const int el) {
            //int* newArr = nullptr;
        if(size == count) {
            size += 10;
            int* newArr = new int[size];
            newArr[0] = el;
            for(int i = 1; i < size - 10; ++i) {
                newArr[i] = arr[i - 1];
                std::cout << "newArr[" << i << "]=" << newArr[i] << std::endl;
            }
            for(int i = count; i < size; ++i) {
                newArr[i] = -1;
            }
            delete[] arr;
            arr = newArr;
        } else {
            int* newArr = new int[size];
            newArr[0] = el;
            for(int i = 1; i < size; ++i) {
                std::cout << "newArr[" << i << "]=" << newArr[i] << std::endl;
                newArr[i] = arr[i - 1];
            }
            for(int i = count; i < size; ++i) { 
                std::cout << "newArr[" << i << "]=" << newArr[i] << std::endl;
                newArr[i] = -1;
            }
            delete[] arr;
            arr = newArr;
        }
       /* for(int i = count; i < size; ++i) {
            newArr[i] = -1;
        }
        delete[] arr;
        arr = newArr;
        ++count;*/
    } 

    void popFront() {
        if(count < 1) {
            std::cout << "ERROR: There is no elements to popFront. Try PushBack first." << std::endl;
        } else if(count < size - 10) {
            size -= 10;
            int* newArr = new int[size];
            for(int i = 0; i < size - 1; ++i) {
                newArr[i] = arr[i + 1];
                std::cout << "newArr[" << i << "]=" << newArr[i] << std::endl;
            }
            for(int i = count; i < size; ++i) {
                newArr[i] = -1;
            }
            delete[] arr;
            arr = newArr;
            --count;
        } else {
            int* newArr = new int[size];
            for(int i = 0; i < size - 1; ++i) {
                newArr[i] = arr[i + 1];
            }
            for(int i = count; i < size; ++i) {
                newArr[i] = -1;
            }
            delete [] arr;
            arr = newArr;
            --count;
        }
        std::cout << "count = " << count << std::endl;
    }
    
};

int main() {
    int choose = 0;
    int element;
    Vector vec;
    std::cout << "size = " <<  vec.getSize() << std::endl;
    std::cout << "If you want to stop the program, input \" OK \"" << std::endl;
    do {
        std::cout << "For pushBack, enter 1" << std::endl;
        std::cout << "For popBack, enter 2" << std::endl;
        std::cout << "For pushFront, enter 3" << std::endl;
        std::cout << "For popFront, enter 4" << std::endl;
        std::cin >> choose;
        if(1 == choose) {
            std::cout << "Enter the element you want to pushBack: ";
            std::cin >> element;
            vec.pushBack(element);
        } else if(2 == choose) {
            vec.popBack();
        } else if(3 == choose) {
            std::cout << "Enter the element you want to pushFront: ";
            std::cin >> element;
            vec.pushFront(element);
        } else if(4 == choose) {
            vec.popFront();
        }
        vec.printVector();
   } while(std::cin);
    return 0;
}
