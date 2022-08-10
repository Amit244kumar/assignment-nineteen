int main()
{
    int g;
    char str[5][20],s[10];
    printf("Enter 5 strings:\n");
    for(int i=0;i<5;i++)
    {
        gets(str[i]);
    }
    printf("Enter the string to search:\n");
    gets(s);
    for(int i=0;i<5;i++){
            g=search(str[i],s);
        if(g){
            printf("In %d string the %d position match",i+1,g);
            break;
        }
    }
     if(g==0)
        printf("No match");
    getch();
    return 0;
}

int search(char str[],char s[])
{
    int i=0,c,x=0;
    c=length(s);
    for(int j=0;str[j];j++)
    {
        if(s[i]==str[j])
        {
           x++;
           i++;
           if(s[x]=='\0')
            return j-x+2;
        }
        else{
            x=0;
            i=0;
        }
    }
    return 0;
}
int length(char s[])
{
    int i;
    for(i=0;s[i];i++);
    return i;
}
