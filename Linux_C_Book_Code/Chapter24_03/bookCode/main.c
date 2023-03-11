#include <stdio.h>
#include <stdlib.h>
#include "rederict_ptr.h"
#include "para_allocator.h"
int main() {

    /**
     * 双层指针指向静态内存
     */
    const char *firstday = NULL;
    const char *secondday = NULL;

    get_a_day(&firstday);

    get_a_day(&secondday);

    printf("%s\t%s\n", firstday, secondday);


    /**
     * 双层指针指向分配的动态内存
     * Q1：为什么不能用单层指针？
     *      单层无法获得malloc返回的指针
     * Q2：为什么不能直接 free(p);
     *      内存泄露
     */
    unit_t *p = NULL;
    alloc_unit(&p);
    printf("number: %d\nmsg: %s\n", p->number, p->msg);

    free_unit(p);
    p = NULL;
    return 0;
}
