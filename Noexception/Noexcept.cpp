#include <iostream>

void foo() noexcept {
    throw 1;
}
//void foo() {}
void boy() noexcept(1) {}
void girl() noexcept(1-1) {}

int main(){
    using std::cout;
    using std::endl;

    cout << "NoExcept1: " << noexcept(foo()) << endl 
//        << "Noexcept2: " << noexcept(foo()) << endl
        << "Noexcept3: " << noexcept(boy()) << endl
        << "Noexcept4: " << noexcept(girl()) << endl;
    cout << "Calling foo() with throw 1;" << endl;
    foo();
}