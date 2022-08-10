#include<stdio.h>

int main()
{
    char str[5][20];
    printf("Enter the 5 strings");
    for(int i=0;i<5;i++)
        fgets(str[i],20,stdin);
    for(int i=0;i<5;i++)
        printf("%s\n",str[i]);
    getch();
    return 0;
}
