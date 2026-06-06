#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int computer(int com);
void win(int com,int num);
int main() 
{
    srand(time(NULL));
    int com = (rand()%3) +1;
    int num = 0;
    printf("****Rock Paper Scissors game****\n");
    printf("you have three choices !\n");
    printf("1. ROCK!\n");
    printf("2. PAPER!\n");
    printf("3. SCISSORS!\n");
    printf("Enter your choice:");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("you chose ROCK!\n");
        break;
    case 2:
        printf("you chose PAPER\n");
        break;
    case 3:
        printf("you chose SCISSORS\n");
        break;
    default:
        printf("katmergen biya wla");
        break;
    }
    computer(com);
    win(com,num);

    return 0;
}

int computer(int com)
{
   switch (com)
   {
    case 1:
        printf("Computer chose ROCK!\n");
        break;
    case 2:
        printf("Computer chose PAPER\n");
        break;
    case 3:
        printf("Computer chose SCISSORS\n");
        break;
    default:
       printf("katmergen biya wla");
        break;
    }
   return 0;
}  
void win(int com,int num)
{
    if (com == num)
    {
        printf("it's a TIE\n");
    }
    else if (com == 1 && num ==2)
    {
        printf("you win!");
    }
    else if (com == 3 && num ==1)
    {
        printf("you win!");
    }
    else if (com==2 && num ==3)
    {
        printf("you win!");
    }
    else if (com == 1 && num ==3)
    {
        printf("you lose!");
    }
     else if (com == 1 && num ==2)
    {
        printf("you lose!");
    }
     else if (com == 2 && num ==3)
    {
        printf("you lose!");
    }
}