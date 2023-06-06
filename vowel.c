#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int i,vowel = 0,cons =0;
puts("enter a string");
gets(a);

strlwr (a);
for(i=0;a[i]!='\0';i++)
{
   {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
    vowel++;
    else
    cons++;
    }
}
printf("given: %s \n ",a);
printf("number of vowels are %d \nnumber of consonents are %d",vowel,cons);
return 0;
}