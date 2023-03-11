#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <error.h>
int main() {

    /*
     FILE *fp = fopen("a.txt","r");
    if(fp  == NULL){
        printf("error in open file main \n");
        exit(1);
    }
     */

    /*
    FILE *fp = fopen("abcde", "r");
    if (fp == NULL) {
        perror("Open file abcde");
        exit(1);
    }
     */

    FILE *fp;
    int ch;
    if((fp = fopen("file2","w+")) == NULL){
        perror("Open file \" file2\"\n");
        exit(1);
    }
    while ((ch = getchar()) != EOF){
        fputc(ch, fp);
    }
    rewind(fp);
    while ((ch = fgetc(fp) != EOF)){
        putchar(ch);
    }
    fclose(fp);
}
