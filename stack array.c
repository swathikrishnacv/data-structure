#include<stdio.h>
int size=3;
void push(int a[],int *last)
{
if(*last>=size-1)
{
printf("stack overflow");
}
else
{
*last+=1;
printf("\nEnter the element ");
scanf("%d",&a[*last]);
printf("\n %d pushed in to the stack",a[*last]);
}
}
int pop(int a[],int *last)
{
int ele;
if(*last>-1)
{
ele=a[*last];
*last-=1;
printf("\n the value %d poped from the stack",ele);
}
else
printf("stack underflow");
}
void display(int a[],int *last)
{
int i;
if(*last<0)
{

printf("\n stack is empty");
return ;
}
else
{
printf("\n the stack element are :");
for(i=0;i<=*last;i++)
printf("%d",a[i]);
}
}
int main()
{
int arr[size],ch,e=1;
int last=-1;
while(e)
{
printf("\n stack using array");
printf("\n ..................MENU..................");
printf("\n1.Push \n 2.Pop \n 3.Display \n4.Exit");
printf("\n ........................................");
printf("\n Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:push(arr,&last);
       break;
case 2:pop(arr,&last);
       break;
case 3:display(arr,&last);
       break;
case 4:e=0;
       printf("\nExiting");
       break;
default:printf("\n Please enter valid choice");
}
}
return 0;
}


