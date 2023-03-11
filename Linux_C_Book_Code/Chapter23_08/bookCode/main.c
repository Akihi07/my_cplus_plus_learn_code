#include <stdio.h>
#include <stdlib.h>
void say_hello(const char *str){
    printf("Hello, %s\n", str);
}

void say_goodbye(const char *str){
    printf("Good Bye, %s\n",str);
}



int main() {
    void (*f) (const char *) = say_goodbye;
    void (*greet[]) (const char  *) = {say_hello, say_goodbye};
    f("Guys");
    greet[0]("Hao");
    greet[1]("He");

    return 0;
}
