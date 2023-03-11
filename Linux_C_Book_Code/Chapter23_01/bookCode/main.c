#include <stdio.h>

int *swap(int *px, int *py){
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
    return px;
}

int main() {
    /*
     * 指针 尽管 swap 无法访问 main 的局部变量，
     * 但是提供的参数是指向 main 局部变量的指针
     * */
    int i = 10, j = 20;
    int *p = swap(&i, &j);
    printf("now i = %d, j = %d, *p = %d\n",i,j,*p);

    /*  0xC5000000 退出表示段错误   */
    // "Hello, world.\n"[0] = 'A';
    char * str = "ABC";
    // str[4]='x';
    putchar(*(str + 1));
    putchar('\n');


    /**
     * 数组指针控制 数组名在表达式中转换为数组首元素指针
     */
    char a[4][3][2] = {
            {{'a', 'b'}, {'c', 'd'}, {'e', 'f'}},
            {{'g', 'h'}, {'i', 'j'}, {'k', 'l'}},
            {{'m', 'n'}, {'o', 'p'}, {'q', 'r'}},
            {{'s', 't'}, {'u', 'v'}, {'w', 'x'}},
    };
    char (*pa)[2] = &a[1][0];
    char (*ppa)[3][2] = &a[1];

    printf("%c\n",(*(pa + 5))[1]);
    printf("%c\n",(*(ppa+1))[2][1]);


    /**
     * 字符串翻转
     */
    char p2[]   = "dlrow_olleh";
    char * head = p2;
    char * tail = p2;

    while (*tail){
        tail++;
    }
    tail--;

    while (head < tail){
        char temp = *head;
        *head = *tail;
        *tail = temp;
        head++;
        tail--;
    }
    puts(p2);

}
