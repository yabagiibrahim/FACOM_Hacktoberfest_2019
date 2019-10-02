#include<iostream>

using namespace std;

class calculator

{
	public:

	int a,b;

	int add()		//Function to perform Addition

		{
			return (a+b);
		}

	int sub()		//Function to perform Subtraction

		{
			return (a-b);
		}


	int div()		//Function to perform Division

		{
			return (a/b);
		}

	int mul()		//Function to perform Multiplication

		{
			return (a*b);
		}

};

int main()

{

	int x;
	char ch;

	calculator obj1;

	do
	{
		system("cls");

		cout<<"\n\n\t***WELCOME TO THE CALCULATOR USING CLASSES***\n\n\n\tPress 1 to choose Addition\n\n\tPress 2 to choose Subtraction\n\n\tPress 3 to choose Divison\n\n\tPress 4 to choose Multiplication\n\n\n\t";
		cin>>x;

		switch(x)

		{

	       	case 1:

					cout <<"\n\tEnter the numbers to be added\n\n\t";
					cin>>obj1.a>>obj1.b;
					cout<<"\n\tThe answer is "<<obj1.add();
	   				break;

	        case 2:

	          		cout <<"\n\tEnter the numbers to be subtracted\n\n\t";
	           		cin>>obj1.a>>obj1.b;
	           		cout<<"\n\tThe answer is "<<obj1.sub();
	       			break;

      		case 3:

		  			cout<<"\n\tEnter the numbers to be divided\n\n\t";
		           	cin>>obj1.a>>obj1.b;
		           	cout<<"\n\tThe answer is "<<obj1.div();
		           	break;

	     	case 4:

		           	cout <<"\n\tEnter the numbers to be multiplied\n\n\t";
		           	cin>>obj1.a>>obj1.b;
		           	cout<<"\n\tThe answer is "<<obj1.mul();
		           	break;

	       	default:

	            	cout <<"\n\tError! input is not correct\n\n";
	            	break;
		}


		cout<<"\n\n\tWould you like to do another calculation? (Y/N)";
		cin>>ch;
	}	

	while((ch=='y') || (ch=='Y'));

    return 0;

}
