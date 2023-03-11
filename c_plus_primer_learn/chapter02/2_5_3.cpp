int main(int argc, char const *argv[])
{
    // auto 忽略顶层 const , 
    // int i = 0, &r = i;

    // auto a = r; // a is an int

    // const int j = 0;
    // auto d = j;

    // 设置的类型是 auto 的引用时， 初始值中的顶层变量属性仍然保留 
    // const int tmep = 42;

    // auto &h = tmep;
    

    // 练习
    const int i = 42; // i is a const int
    auto j = i; // j is a int, 忽略 i 的 high level const
    const auto &k = i; // k 是一个 const 的 reference, auto + 引用 保留 high level const
    auto *p = &i; // &i， i 是常量，对常量取地址& 是low level const

    const auto j2 = i, &k2 = i; // j2 const int， k2 const int reference

    
    
    return 0;
}
