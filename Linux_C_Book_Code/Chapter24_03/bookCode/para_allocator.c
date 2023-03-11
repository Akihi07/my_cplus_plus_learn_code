//
// Created by 11071 on 2021/12/7.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "para_allocator.h"

void alloc_unit(unit_t **pp){
    unit_t *p = malloc(sizeof(unit_t));
    if(p == NULL){
        printf("out of memory!");
        exit(1);
    }
    p->number = 3;
    p->msg = malloc(20);
    strcpy(p->msg, "Hello world!");
    *pp = p;
};
 void free_unit(unit_t *p){
     free(p->msg);
     free(p);
 };
