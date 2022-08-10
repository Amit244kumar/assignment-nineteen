int main()
{
    int i,j,n=10,v;
    char str[10][20];
    for(i=0;i<10;i++)
        gets(str[i]);

    for(i=0;i<10;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(compare(str[j],str[j+1])==1)
            {
                swap(str[j],str[j+1]);
            }
        }
    }
    for(int i=0;i<10;i++)
           printf("%s\n",str[i]);
    getch();
    return 0;
}
void swap(char s1[],char s2[])
{
    char temp;
    for(int i=0;s1[i]||s2[i];i++)
    {
        temp=s1[i];
        s1[i]=s2[i];
        s2[i]=temp;
    }

}
/*
delhi
haryana
UP
MP
mumbai
kerla
rajisthan
gao
kashmir
punjab
*/

char uppr(char c);
int compare(char s1[],char s2[])
{
    for(int i=0;s1[i],s2[i];i++)
    {
        if(uppr(s1[i])>uppr(s2[i]))
            return 1;
        if(uppr(s1[i])<uppr(s2[i]))
            return -1;
    }
    return 0;
}

char uppr(char c)
{
    if(c>91)
        c-=32;
    return c;
}
