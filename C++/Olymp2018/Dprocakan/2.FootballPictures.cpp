#include <iostream>

int numDevisors(int numOfSquares){
    int devisors[numOfSquares/4];
    int j = 0;
    for(int i = 1; i < numOfSquares / 2 + 1; ++i){
        if(numOfSquares % i == 0){
            devisors[j] = (i + i + ((numOfSquares / i) * 2));
            ++j;
        }
    }
    int min = devisors[0];
    for(int i = 0; i < j; ++i){
        if(devisors[i] < min && devisors[i] > 4){
            min = devisors[i];
        }
    }
    return min;
}

int main(){
    int numOfSquares = 0;
    std::cin >> numOfSquares;
    std::cout << numDevisors(numOfSquares) << std::endl;
    return 0;
}
