#include<stdio.h>
#include<conio.h>
main()
{ //using pointer how we can "traverse" an array
int a[5];
int i;
int *p;
clrscr();
p=&a[0];
printf("please enter 5 values\n");
for(i=0;i<5;i++)
{	scanf("%d",p+i);	} //using pointer &a[i]=p+i
//printf("\n address==%u\taddress==%u",&a[2],p);//p+1=&a[1] and bit size increases by some bits as per data type
for(i=0;i<5;i++)
{	printf("\n%d \t",*(p+i));} //using pointer  a[i]=*(p+i)
getch();
return 0;
}
