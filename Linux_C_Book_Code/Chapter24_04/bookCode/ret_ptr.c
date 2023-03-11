//
// Created by 11071 on 2021/12/7.
//
#include <string.h>
#include <stdlib.h>
#include "ret_ptr.h"

static const char *msg[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
};
char * get_a_day(int idx){
    char *buf = malloc(20);
    strcpy(buf, msg[idx]);
    return buf;
}