#include <stdio.h>
#include <string.h>
int main() {

    /**
     * 分割字符串 strtok
     */
    char str_tok[] = "root:x::0:root:/root:/bin/bash:";
    char *token;

    token = strtok(str_tok, ":");
    printf("%s\n",token);
    while ((token = strtok(NULL, ":"))!=NULL){
        printf("%s\n",token);
    }

    /**
     * 可重入分割字符串
     * strtok_r
     */

    char str_tok_r[] = "a/bbb///cc;xxx:yyy:";
    char *delim[] = {":;","/"};
    char *str1, *str2;
    char *token_r, *subtoken_r;
    char *point_1, *point_2;

    for(str1 = str_tok_r;  ;str1=NULL){
        token_r = strtok_r(str1, delim[0], &point_1);
        if(token_r == NULL){
            break;
        }
        printf("First:%s\n",token_r);
        for(str2 = token_r;;str2 = NULL){
            subtoken_r = strtok_r(str2, delim[1], &point_2);
            if(subtoken_r == NULL){
                break;
            }
            printf("-->:%s\n",subtoken_r);
        }
    }

    printf("%d",(int) (sizeof(delim) / sizeof(delim[0])));





    return 0;
}
