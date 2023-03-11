//
// Created by 11071 on 2021/12/9.
//

#ifndef BOOKCODE_LINKEDLIST_H
#define BOOKCODE_LINKEDLIST_H

typedef struct node *link;

struct node{
    unsigned char item;
    link next,pre;
};

link make_node(unsigned char item);
void free_node(link p);
link search(unsigned char key);
void insert(link p);
link delete(link p);
void traverse(void (*visit)(link));
void destroy(void);
void push(link p);
link pop(void);

#endif //BOOKCODE_LINKEDLIST_H
