#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int ROCKPAPERSCISSOR(char you , char computer)

{
    if(you == computer)
    {
        return 0;
    }

    else

    if(you == 'r' && computer == 's' || you == 'p' && computer == 'r' || you == 's' && computer == 'p')
    {
        return 1;
    }

    else 
    {
        return -1;
    }
}

int main()
{
    char you , computer;

    srand(time(0));
    int num = rand()%100+1;

    if(num <= 33)
    {
        computer = 'p';
    }

    else 

    if(num <= 66)
    {
        computer = 'r';
    }

    else
    {
        computer = 's';
    }

    printf("enter 'r' for rock , 'p' for paper and 's' for scissors : ");
    scanf("%c",&you);

    int result = ROCKPAPERSCISSOR(you,computer);

    if(result == 0)
    {
        printf("\n its a draw \n");
    }

    else

    if(result == 1)
    {
        printf("\n you won \n");
    }

    else

    if(result == -1)
    {
        printf("\n computer won \n");
    }

    printf("\n you have chosen %c and computer have chosen %c \n ",you,computer);
}