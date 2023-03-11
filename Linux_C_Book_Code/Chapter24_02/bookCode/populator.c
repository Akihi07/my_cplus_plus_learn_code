//
// Created by 11071 on 2021/12/7.
//
#include <string.h>
#include "populator.h"

void set_unit(unit_t *p){
    if (p == NULL){
        return;
    }
    p->number = 3;
    strcpy(p->msg, "Hello world!");
}

