#include<stdio.h>
#include<stdlib.h>
void red () {
  printf("\033[1;31m");
}
void green()
{
    printf("\033[0;32m");
}
void yellow (){
  printf("\033[1;33m");
}

void blue ()
{
    printf("\033[0;34m ");
}

void cyan()
{
    printf("\033[0;36m ");
}
/* Function to reset text color to default */
void reset () {
  printf("\033[0m");
}
int main()
{
    char ply1[20],ply2[20];
    cyan();
    printf("Enter the name of 1P :");
    reset();
    scanf("%s",ply1);
    cyan();
    printf("Enter the name of 2P :");
    reset();
    scanf("%s",ply2);
    int num,sum=0;
    while(1)
    {
        p1:
        yellow();
        printf("%s please enter the number  : ",ply1);
        reset();
        num=0;
        scanf("%d",&num);
        if(num<1 || num >3)
        {
            num=0;
            red();
            printf("Please enter number in between 1 to 3\n");
            reset();
            goto p1;
        }
        sum+=num;
        if(sum>=13)
        {
            green();
            printf("\t\t\t\t-----Game Result----- ");
            reset();
            red();
            printf("\n %s you lost the game 😲 \n",ply1);
            reset();
            printf("\n");
            green();
            printf("Handover all the choclates to %s\n",ply2);
            printf("\nBy the way %s take the 🌶️\n",ply1);
            reset();
            exit(0);
        }
        p2:
        cyan();
        printf("%s please enter the number : ",ply2);
        reset();
        num=0;
        scanf("%d",&num);
        if(num<1 || num >3)
        {
            num=0;
            red();
            printf("Please enter number in between 1 to 3\n");
            reset();
            goto p2;
        }
        sum+=num;
        if(sum>=13)
        {
            green();
            printf("\t\t\t\t-----Game Result-----");
            reset();
            red();
            printf("\n%s you lost the game \n",ply2);
            reset();
            printf("\n");
            green();
            printf("Handover all the 🍫 to %s\n",ply1);
            printf("\nBy the  way %s take the 🌶️\n",ply2);
            reset();
            exit(0);
        }
    }
}