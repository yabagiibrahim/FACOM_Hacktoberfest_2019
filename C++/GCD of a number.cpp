#include<iostream>

int main()
{ int n1,n2,gcd=0;
  cout<<"\n Enter first number : ";
  cin>>n1;
  cout<<"\n Enter second number : ";
  cin>>n2;

  for(int i=1;i<=n1 && i<=n2;i++)
  {
	if((n1%i) && (n2%i))
	{
		gcd = i;
	}
  }
  cout<<"GCD : "<<gcd;
  getch();
  return 0;
}