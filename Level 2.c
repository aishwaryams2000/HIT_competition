//Please add a comment to each lines that has changes and Indicate the changes
#include<stdio.h>
int main() //rnain->main
{
 	int a,b;  //char->int
 	scanf("%d",&a); //%f->%d and b->a
 	b=0; //b=a%10->b=0;
	//a=a/10;  removed this line
 	while(a>0) //a==0->a>0
 	{
  		b=b*10+(a%10);//b=b+10*(a%10)->b=b*10+(a%10);
  		a=a/10;
 	}//Please add a comment to each lines that has changes and Indicate the changes
 	printf("%d",b); //%c->%d
 	return 0;
}
//Please add a comment to each lines that has changes and Indicate the changes
/*
Input 1
1234
Output 1
4321
Input 2
5667
Output 2
7665
*/

