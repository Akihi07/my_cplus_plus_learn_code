#include <stdio.h>
#include <stdlib.h>
#define N 100000
int a[N];

void gen_random(int upper_bound){
    for (int i = 0; i < N; i++){
        a[i] = rand() % upper_bound;
    }
}

int count_random(int value){
    int count = 0;
    for(int i = 0; i < N; i++){
        if(a[i] == value){
            count++;
        }
    }
    return count;
}

void print_random(){
    for (int i = 0;i < N; i++){
        printf("%d  ",a[i]);
    }
    printf("\n");
}
int main() {
    gen_random(10);
    //print_random();
    for(int i = 0; i < 10; i++){
        printf("%d\t%d\n",i,count_random(i));
    }
}
