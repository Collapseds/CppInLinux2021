#include <iostream>
#include <string>
using namespace std::string_literals;

//函数模板定义
template <typename T>

auto max1(T x , T y){
    return x > y ? x : y;
}

//显示实例化:整数
//template auto max <int>(int , int);
//template auto max <std::string> (std::string , std::string);

int main(){
    //调用显示实例化的函数
    std::cout << "max(1, 2): " << max1<int>(1, 2) << std::endl;
    //浮点数实例化
    std::cout << "max(2.9 , 1.0): " << max1<double>(2.9, 1.0) << std::endl;    
    //字符实例化
    std::cout << "max('A', 'D'): " << max1<char>('A', 'D') << std::endl;
    //字符串字面量实例化
    std::cout << R"(max("ABC", "ABD"): )" << max1<const char[4]>("ABC", "ABD") << std::endl;
    std::cout << R"(max("ABD", "ABC"): )" << max1<const char[4]>("ABD", "ABC") << std::endl;
    //std::string 类型实例化
    std::cout << R"(max("ABC"s, "ABD"s): )" << max1<const std::string>("ABC"s, "ABD"s) << std::endl;
    std::cout << R"(max("ABD"s, "ABC"s): )" << max1<const std::string>("ABD"s, "ABC"s) << std::endl;
    //名字空间冲突问题
}