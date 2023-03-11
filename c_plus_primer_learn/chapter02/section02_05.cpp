#include "iostream"

int main(int argc, char const *argv[])
{
    /*
     * decltype的用法总结
     *      decltype 会获取变量的 high-level const
     * 1. decltype 后接 变量 (var), 获取的是变量的类型
     * 2. decltype 后接 *p, ((var)) 等表达式，获取的是指向变量的引用
     * */
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    c++;
    d++;
    // a 变成 4 -> d 是一个引用，d++ 后会同时改变 a 的值

    std::cout << " a: "<< a << " b: "<< b << " c: "<< c << " d: "<< d << std::endl;

    return 0;
}