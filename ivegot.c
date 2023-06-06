// Write a C program that takes a string as input from the user and stores it in an array.
// The program should then print out the length of the string and its individual characters, each on a new line.
#include<stdio.h>
#include<string.h>
int main()
{
char a[10],i;
puts("enter a string");
gets(a);
puts("\nthe length of th string is: ");
i=(strlen(a));
puts(i);
puts("\nthe characters of string are\n");
for(i=0;a[i]!='\0';i++)
{
    printf("%c\n",a[i]);
}
return 0;
}