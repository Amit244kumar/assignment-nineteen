char upr(char s);
int findVowel(char c);
int main()
{
    int i,j,count=0;
    char str[5][20];
    printf("Enter 5 string each in new line:");
    for(i=0;i<5;i++)
        gets(str[i]);

    for(i=0;i<5;i++)
        for(j=0;str[j][i];j++)
            if(findVowel(str[j][i]))
                count++;

    printf("The total vowel in string %d",count);
    getch();
    return 0;
}
int findVowel(char c)
{
    c=upr(c);
    if(c=='A'||c=='U'||c=='I'||c=='E'||c=='O')
        return 1;
    return 0;
}
char upr(char s)
{
    if(s>91)
        s-=32;
    return s;
}
