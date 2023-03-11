#include<iostream>

int main(int argc, char const *argv[])
{
    /* code */
    std::cout << "hello world!" << std::endl;

    unsigned char c = -1;
    std::cout << c << std::endl;

    unsigned int v1 = 42, v2 = 10;

    std::cout << v1 - v2 << std::endl;
    
    // unsigned int 类型为 32bit, 4 Bytes
    std::cout << v2 - v1 << std::endl;

    for (int i = 10; i >= 0; i--){
        std::cout << i << std::endl;
    }

    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;

    int i = 10, i2 = 42;

    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;

    std::cout << i - u2 << std::endl;

    // 转义字符
    // \后接八进制数字（不超过3个） \x 后接16进制的转义字符（不超过4个）
    std::cout << "Hi \x4do\115!\n" << std::endl;
    

    return 0;
}
