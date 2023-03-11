//
// Created by 11071 on 2021/12/7.
//

#ifndef BOOKCODE_PARA_ALLOCATOR_H
#define BOOKCODE_PARA_ALLOCATOR_H
typedef struct {
    int number;
    char *msg;
} unit_t;

extern void alloc_unit(unit_t **);
extern void free_unit(unit_t *);
#endif //BOOKCODE_PARA_ALLOCATOR_H
