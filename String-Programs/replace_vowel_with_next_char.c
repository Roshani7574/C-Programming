#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("\n Enter a string :");
    scanf("%s",str);
    for(int i=0; i<strlen(str);i++)
    {
        
        if(str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' ||str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
        {
            str[i]=str[i]+1;
            printf("%c",str[i]);
        }
        else
        {
            printf("%c",str[i]);
        }
    }
}
