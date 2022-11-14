/*
c o m p
o     m
m     o
p m o c

*/
#include <stdio.h>
#include<string.h>
int main()
{
    char input[100];int i,j,k,m; char pat[50][50];
    
    printf("Enter char : ");
    scanf("%s",input);
    
    k=strlen(input);
    
   
     
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;k++)
        {
            pat[i][j]=' ';
        }
        pat[i][j]='\0';
    }
    
    m=0;
    
    for(i=0;i<k;i++)
    {
        if(m==0)
        {
            pat[0][0]=pat[k-1][k-1]=input[m];
        }
        else if(m==k-1)
        {
            pat[0][k-1]=pat[k-1][0]=input[m];
        }
        else{
            pat[0][i]=pat[i][0]=pat[k-i-1][k-1]=pat[k-1][k-i-1]=input[m];
        }
    }
    
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;k++)
        {
            printf("%c",pat[i][j]);
        }
    }
    return 0;
}
