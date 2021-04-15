#include <iostream>
#include <iomanip>
#include "SelectionSort.h"

int main(){
    std::array x{3.2, 2.1, 8.3, 4.45, 9.08, 1.25, 5.34, 6.1902};

    for(auto i : x){
        std::cout << std::fixed << std::setprecision(5) << i << "\t";
    }
    std::cout << std::endl;

    SelectionSort(x);

    for(auto i: x){
        std::cout << std::fixed << std::setprecision(5) << i << "\t";
    }
}