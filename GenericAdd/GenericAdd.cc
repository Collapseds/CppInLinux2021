#include <iostream>

template <class T , class S>

auto add (T x , S y){
    return x + y;
}

int main(void){
    std::cout << add( 2 , 3.2 ) << std::endl;
}