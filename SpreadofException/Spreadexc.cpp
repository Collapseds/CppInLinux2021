#include <iostream>

using std::cout;
using std::endl;

class Exception1{};
class Exception2{};
class Exception3{};

void foo1();
void foo2();
void foo3();

int main(){
    try{
        foo1();
        cout << "main()" << endl;
    }catch(std::exception& e){
        cout << "Catch foo()" << endl;
    }
}

void foo1(){
    try{
        foo2();
        cout << "foo1()" << endl;
    }catch(Exception1& e){
        cout << "Catch foo2()" << endl;
    }
}
void foo2(){
    try{
        foo3();
        cout << "foo2()" << endl;
    }catch(Exception2& e){
        cout << "Catch foo3()" << endl;
    }
}
void foo3(){
    Exception1 e;
    throw e;
}