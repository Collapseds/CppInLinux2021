#include <iostream>

struct app{
private:
    int i;
public:
    app(int a){
        i = a;
    }
    int getInt(){
        return i;
    }
};

struct aoo : public app{
    aoo(int i) : app(i){}
};

int main(){
    app a(3);
    std::cout << a.getInt() << std::endl;
    aoo a2(2);
    std::cout << a2.getInt() << std::endl;
}