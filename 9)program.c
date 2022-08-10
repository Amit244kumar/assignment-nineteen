int main()
{
    char str[5][10]={{"amit"},{"ravi"},{"chintu"},{"puneet"},{"mithun"}};
    char s[10];
    int j,r;
    printf("Enter the userName:");
    gets(s);
    for(int i=0;i<5;i++)
    {
        j=check(str[i],s);
        if(j)
        {
            printf("%s is valid user-----\n\n",s);
            printf("Enter the number to calculate the factorial");
            scanf("%d",&r);
            printf("The factorial of %d is %d",r,fact(r));
            break;
        }
    }
    if(j==0)
    {
        printf("%s is not valid user",s);
    }
    getch();
    return 0;
}
int check(char s1[],char s2[])
{
    for(int i=0;s1[i];i++)
    {
        if(s1[i]!=s2[i])
            return 0;
    }
    return 1;
}

int fact(int n)
{
    int j=1;
    for(int i=1;i<=n;i++)
        j=j*i;
    return j;
}
