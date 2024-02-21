#include<iostream>
#include<cstring>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the total numbers:";
	cin>>a;
	if(a==2)
	{
		int b,c;
		cout<<"The value of b and c :";
		cin>>b>>c;
		cout<<"TO add[+]"<<endl<<"to subtract[-]"<<endl<<"To multiply[*]"<<endl<<"To divide[/]"<<endl<<"To get reminder[%]"<<endl<<"To power[^]"<<endl; 
		char operation;
		cout<<"The operator to perform: ";
		cin>>operation;
		if(operation=='+')
		{
			cout<<"The value :"<<b+c;
		}
		else if(operation=='-')
		{
			cout<<"The value :"<<b-c;
		}
		else if(operation=='*')
		{
			cout<<"The value :"<<b*c;
		}
		else if(operation=='/')
		{
			cout<<"The value :"<<b/c;
		}
		else if(operation=='%')
		{
			cout<<"The value :"<<b%c;
		}
		else if(operation=='^')
		{
			cout<<"The value :"<<pow(b,c);
		}
		else
		{
			cout<<"The given opertaor is a wrong operator.";
		}
	}
	else
	{
		cout<<"Wrong input";
	}
}
