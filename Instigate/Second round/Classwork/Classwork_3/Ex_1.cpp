namespace k {int i = 7;}
int i = 85;

int main() {
    int i = 5;
    if(true) {
        int i = 9;
        std::cout << "k::i = " << k::i << std::endl;
        std::cout << "i = " << i << std::endl;
        std::cout << "global i = " << ::i << std::endl;
    }
    std::cout << "i = " << i << std::endl;
}
