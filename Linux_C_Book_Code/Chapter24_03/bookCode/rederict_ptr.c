//
// Created by 11071 on 2021/12/7.
//

#include "rederict_ptr.h"
static const char *msg[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
};

void get_a_day(const char **pp){
    static int i = 0;
    *pp = msg[i % 7];
    i++;
}