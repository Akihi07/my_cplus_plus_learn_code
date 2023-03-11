//
// Created by 11071 on 2021/12/9.
//
#include <stdlib.h>
#include "linkedlist.h"

static link head = NULL;

link make_node(unsigned char item){
    link p = malloc(sizeof(*p));
    p->item = item;
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
    //p->next = head;
    //head = p;

    // if(!head  || (head && p->item <= head->item)){
    //     p->next = head;
    //     head = p;
    // } else{
    //     link pre, back;
    //     for (pre = head; pre; pre = pre->next) {
    //         if(pre->item < p->item){
    //             back = pre;
    //         }
    //     }
    //     p->next = pre;
    //     back->next = p;
    // }

    /*
     * 最简洁的写法
     * */
    link *pp;
    for (pp = &head;*pp ; pp = &(*pp)->next) {
        if((*pp)->item > p->item){
            break;
        }
    }
    p->next = *pp;
    *pp = p;
}

link delete(link p){
    /*第一种实现方式*/
    // link pre;
    // if(p == head){
    //     head = p->next;
    //     return p;
    // }
    // for (pre = head; pre; pre = pre->next){
    //     if(pre->next == p){
    //         pre->next = p->next;
    //         return p;
    //     }
    // }
    // return NULL;
    /*第二种实现方式*/
    link *pp;
    for (pp = &head;*pp; pp = &(*pp)->next) {
        if(*pp == p){
            *pp = p->next;
            return p;
        }
    }
    return NULL;
}

void traverse(void (*visit)(link)){
    link p;
    for(p = head; p ;p = p->next){
        visit(p);
    }
}

void destroy(void){
    link q, p = head;
    head = NULL;
    while (p){
        q = p;
        p = p->next;
        free(q);
    }
}

void push(link p){
    insert(p);
}

link pop(void){
    if(head == NULL){
        return NULL;
    }else{
        return delete(head);
    }
}