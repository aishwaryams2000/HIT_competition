//Please add a comment to each lines that has changes and Indicate the changes
#include<stdio.h>   //stdoi.h->stdio.h
char main()
{	int a,b,c,mx,mi;   //char->int
	scanf("%d%d%d",&a,&b,&c);   //%f -> %d
	printf("\t%d\t%d\t%d",a,b,c); //format specifier-%f->%d
	if(a>b)
	{
		if(a>c)
		{
			mx=a;
			if(b>c)	
				mi=c;
			else 
				mi=b;
		}
	}
	else if(b>c)
    	{
		if(b>a) 
		{
			mx=b;
            	if(a>c) 
				mi=c;
			else mi=a;
		}
	}
	else//Please add a comment to each lines that has changes and Indicate the changes
	{
		mx=c;
		if(a>b) 
			mi=b;
		else 
			mi=a;
	}
	printf("Largest is %d and smallest is %d",mx,mi);    //%f->%d and scanf->printf and mi<->mx
}
//Please add a comment to each lines that has changes and Indicate the changes
/*
Test Cases
Input 1
3 5 7
Output 1
3 5 7
Largest is 7 and smallest is 3
Input 2
7 4 2
Output 2
7 4 2
Largest is 7 and smallest is 2
*/
