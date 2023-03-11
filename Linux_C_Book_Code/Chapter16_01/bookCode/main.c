#include <stdio.h>

int main() {
    int i = 0xcffffff3;
    // 默认 有符号整数 做了 Integer Promotionff3 >>
    printf("%x\n",0xcffff2);
    printf("%x\n",i >> 2);

    int a = 0x3afc;
    int b = 0x4da5;

    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf("%x\n",a);
    printf("%x\n",b);

    for (int i = 0; i <= 1024 ; ++i) {
        if ((i & 0xff) == 0){
            printf("%d\n",i);
        }
    }
}
