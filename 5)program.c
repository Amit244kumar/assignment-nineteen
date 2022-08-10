int main()
{
    char email[5][40];
    printf("Enter the 5 email id\n");
    for(int i=0;i<5;i++)
        gets(email[i]);
    for(int i=0;i<5;i++)
    {
        if(check(email[i])==0)
           printf("The %d email don not have '@' \n",i+1);
    }

    getch();
    return 0;
}
int check(char s[])
{
    for(int i=0;s[i];i++)
    {
        if(s[i]=='@')
            return 1;
    }
    return 0;
}
