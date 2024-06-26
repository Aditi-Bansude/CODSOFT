#include<iostream>
using namespace std;

int main()
{
	int num1,num2, option,c;
	do
	{
		cout<<"\n\nEnter the number 1 : ";
		cin>>num1;
		cout<<"Enter the number 2 : ";
		cin>>num2;
		cout<<"Enter 1 for addition\n";
		cout<<"Enter 2 for subtraction\n";
		cout<<"Enter 3 for multiplication\n";
		cout<<"Enter 4 for division\n";
		cout<<"Enter 5 to exit calculator\n";
		cin>>option;
		switch(option)
		{
			case 1:
				c=num1+num2;
				cout<<"Addition is : "<<c;
				break;
			case 2:
			    c=num1-num2;
				cout<<"Subtraction is : "<<c;
				break;
			case 3:
			    c=num1*num2;
				cout<<"Multiplication is : "<<c;
				break;
			case 4:
				c=num1/num2;
				cout<<"Division is : "<<c;
				break;
			case 5:
				exit(0);
			default:
				cout<<"Invalid Choice";	
		}
	}while(option!=5);
}