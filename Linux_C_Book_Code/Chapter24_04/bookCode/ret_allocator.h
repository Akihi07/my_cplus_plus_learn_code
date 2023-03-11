//
// Created by 11071 on 2021/12/7.
//

#ifndef BOOKCODE_RET_ALLOCATOR_H
#define BOOKCODE_RET_ALLOCATOR_H

typedef struct { int number; char *msg;} unit_t;

extern unit_t *alloc_unit(void);
extern void free_unit(unit_t *);

#endif //BOOKCODE_RET_ALLOCATOR_H
