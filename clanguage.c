This is a c programming file
#include<stdio.h>
#include<conio.h>

void dpqinsert(int q[],int n,int *f,int *r,int x)
{
int i,j,k;
if(*r>=(n-1))
{
printf("Queue overflow");
return;
}
*r =*r+1;
q[*r]=x;
for(i=0;i<=*r;i++)
{
for(j=0;j<=*r;j++)
{
if(q[i]>q[j])
{
k=q[i];
q[i]=q[j];
q[j]=k;
}
}
}
if(*f==-1)
*f=0;
}
int qdelete(int q[],int *f,int *r)
{
int a;
if(*f==-1)
{
printf("\nQueue Underflow");
return;
}
a=q[*f];//return deleted element
if(*f==*r)//if it is the last element in queue, then reinitialize array
{
*f=-1;
*r=-1;
}
else
*f=*f-1;
return(a);//return deleted element a
}
int isempty(int *f)
{
if(*f==-1)
 return 1;
else
 return 0;
}
int isfull(int *r,int n)
{
if(*r>=(n-1))
return 1;
else
return 0;
}
int display(int q[], int *f,int *r)
{
int i;
if(*f==-1)
printf("\nQueue is empty");
else
{
printf("\n\nThe que contains:\n\n");
for(i=*f;i<=*r;i++)
{
printf("%d",q[i]);
}
}
}
void main()
{
int n=5,*f,*r,i,j,k;
int q[5];
*f=-1;
*r=-1;
clrscr();
printf("Name: Shreyas D Trivedi Rollno: 19012011080 \n");
printf("\nFunctions on priority queue:\n");
again:
printf("1.Insert\n 2.Delete\n 3.Display\n 4.Isempty\n 5.Isfull\n 6.Exit\n");
printf("Pick your choice");
scanf("%d",&k);
printf("\n\n");
 switch(k)
  {
  case 1:printf("Enter value to be inserted\n");
	 scanf("%d",&j);
	 dpqinsert(q,n,f,r,j);
	 display(q,f,r);
	 goto again;

  case 2:j=qdelete(q,f,r);
	 printf("%d is deleted\n",j);
	 display(q,f,r);
	 goto again;

  case 3:display(q,f,r);
	 goto again;

  case 4:j=isempty(f);
	 if(j==1)
	 {
	 printf("\nQueue is empty");
	 getch();
	 }
	 else{
	 printf("\nQueue isnt empty");
	 display(q,f,r);
	 }
	 goto again;
  case 5:j=isfull(r,n);
	 if(j==1)
	 printf("\nQueue is full");
	 else
	 printf("\nQueue isnt full");
	 goto again;

  case 6:goto nxt;
}
nxt:
}
