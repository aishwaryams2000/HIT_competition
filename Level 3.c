//Please add a comment to each line with changes and indicate the changes
#include<stdio.h>  //stdlib.h->stdio.h
int main()
{
	int a[50],ap,min,max; //int a[]->a[50]
	printf("enter the number of elements in array:-"); //scanf->printf
	scanf("%d",&ap);    //printf->scanf
	//int k!=0; not needed
	for(int i=0;i<ap;i++) //i>ap -> i<ap
	{
		scanf("%d",&a[i]);  //%c->%d
 	}
	for(int i=0;i<ap;i++)  // i>ap -> i<ap
                printf("%d\n",a[i]);    //%f->%d
	min=a[0];
	for(int i=0;i<ap;i++)   //i-- -> i++
	{
		if(a[i]<=max)
			min=a[i];   //max->min
		if(a[i]>min)
			max=a[i];   //min->max
	}
	printf("Min=%d and Max=%d",min,max); //interchange min & max and %c to %d
	return 0;
}
//Please add a comment to each line with changes and indicate the changes
/*
Input 1
enter the number of elements in array:-5
1
2
3
4
5
Output 1
1
2
3
4
5
Min=1 and Max=5
Input 2
enter the number of elements in array:-3
6
3
9
Output 2
6
3
9
Min=3 and Max=9
*/
//Please add a comment to each line with changes and indicate the changes

