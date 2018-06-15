#include <iostream>

class Animal {
private:
    int legCount;
    bool tail;
    bool fur;

public:
    Animal() {
        legCount = 0;
        tail = false;
        fur = false;
    }

    int getLegCount() {
        return legCount;
    }
    bool getTail() {
        return tail;
    }
    bool getFur() {
        return fur;
    }
    void setLegCount(int var) {
        legCount = var;
    }
    void setTail(bool var) {
        tail = var;
    }
    void setFur(bool var) {
        fur = var;
    }
    void print() {
        std::cout << "Animal has " << legCount << " legs" << std::endl;
    }
};

int main() {
    Animal fish;
    fish.setLegCount(0);
    fish.setTail(true);
    fish.setFur(false);
    fish.print();
    return 0;
}
