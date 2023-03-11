#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_day(int day){
    char days[8][10] = {"", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    if(day < 1 || day > 7){
        printf("Illegal day number! \n");
    } else{
        printf("%s \n", days[day]);
    }
}


int main() {
   // print_day(7);
   /**
    * 剪刀石头布 游戏设计
    */
    char gesture[3][10] = {"scissor", "stone", "cloth" };
    int man, computer, result, ret;
    srand(time(NULL));
    while (1){
        computer = rand() % 3;
        printf("\nInput your gesture (0-scissor 1-stone 2-cloth):\n");
        ret = scanf("%d", &man);
        if(ret != 1 || man < 0 || man > 2){
            printf("Invalid input! Please input 0, 1 or 2.\n");
            continue;
        }
        printf("Your gesture : %s\tComputer's gesture: %s\n",gesture[man], gesture[computer]);
        result = (man - computer +4) % 3 - 1;
        if(result  > 0){
            printf("You win!\n");
        }else if(result == 0){
            printf("Draw!\n");
        } else{
            printf("You loose!\n");
        }
    }
}
