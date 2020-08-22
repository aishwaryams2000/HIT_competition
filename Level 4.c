//Please add a comment to each line with changes and indicate the changes
#include<stdio.h>
#include<string.h> //str->string
void main() //int to void
//Please add a comment to each line with changes and indicate the changes
{
	char a[100],b; //int->char
	char c,i=0; //c to c=a
	printf("Enter a string ");
	scanf("%s",a);   //%ni to %s
	printf("Enter a character to count ");
        scanf("%c",&b); //%d to %c 
	printf("%d\n",b);
	for(i=0;i<strlen(a);i++)
		if(a[i]==b)
			c--;
	printf("\nThe number of occurrences of %d is %c",b,c);
}
//Please add a comment to each line with changes and indicate the changes
/*
Input 1
Enter a string hello
Enter a character to count l
Output 1
l
The number of occurrences of l is 2
Input 2
Enter a string Mississippi
Enter a character to count s
Output 2
s
The number of occurrences of s is 
*/
//Please add a comment to each line with changes and indicate the changes
