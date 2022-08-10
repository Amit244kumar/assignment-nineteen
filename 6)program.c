int main()
{
    int d=0;
    char s[5][10];
    printf("Enter 5 strings:\n");
    for(int i=0;i<5;i++)
        gets(s[i]);
    for(int i=0;i<5;i++){
       if(Ispalindrome(s[i])){
           printf("The %d string is palindrome\n",i+1);
           d=1;
       }
    }
    if(d==0)
        printf("No string palindrome");
    getch();
    return 0;
}
int Ispalindrome(char str[])
{
    int i;
    char s[20];
    for(i=0;str[i];i++)
    {
        s[i]=str[i];
    }
    s[i]='\0';
    reverse(s);
    for(int i=0;str[i];i++)
    {
        if(str[i]!=s[i])
            return 0;
    }
    return 1;
}

void reverse(char s[])
{
    int t,n=length(s);
    for(int i=0;i<n/2;i++)
    {
        t=s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=t;
    }
}
int length(char s[])
{
    int i;
    for(i=0;s[i];i++);
    return i;
}
