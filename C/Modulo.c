#include<stdio>

void main()
{
    int a=0,m=0,x,result;
    clrscr();
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("\nEnter the modulo number : ");
    scanf("%d",&m);
    x=a%m;

    if(a<0)
    {
      result = x+m;
    }
    else
    {
      result = x;
    }

    printf("\nThe result is : %d",x);
    getch();
}