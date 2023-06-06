// compare 2 string
#include<stdio.h>

int main()
{
char a[100],b[100],count,i;
printf("enter 2 string");
scanf("%s%s",a,b);

for (i=0;a[i]!='\0';i++)
{
    if(a[i]==b[i])
    {}
    else
    {
        count=1;
        break;
    }
}
    if (count==1)
    printf("the strings are not same");
    else
    printf("the strings are same");

return 0;
}