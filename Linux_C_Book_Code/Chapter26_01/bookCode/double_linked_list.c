//
// Created by 11071 on 2021/12/14.
//
#include <stdlib.h>
#include "double_linked_list.h"

static link head = NULL;

link make_node(unsigned char item){
    link p = malloc(sizeof(*p));
    p->item = item;
    p->pre = NULL;
    p->next = NULL;
    return p;
}

void free_node(link p){
    free(p);
}

link search(unsigned char key){
    link p;
    for (p = head;  p ; p = p->next) {
        if(p->item == key){
            return p;
        }
    }
    return NULL;
}

void insert(link p){
    p->next = head;
    if(head){
        head->pre = p;
    }
    head = p;
    p->pre = NULL;
}

link delete(link p){
    if(p->pre){
        p->pre->next = p->next;
    } else{
        head = p->next;
    }
    if(p->next){
        p->next->pre = p->pre;
    }
    return p;
}

void traverse(void (*visit)(link)){
    link pre;
    for (pre = head; pre; pre = pre->next) {
        visit(pre);
    }
}

void destroy(void){
    link q,p= head;
    head = NULL;
    while (p){
        q = p;
        p = p->next;
        free(q);
    }
}