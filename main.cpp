#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() 
{
float num1, num2, result;
int op;
cout <<"write the first number: ";
cin >>num1;
cout <<"write the second number: ";
cin >>num2;
cout <<"---------------------\n";
cout <<"1 - Addition\n";
cout <<"2 - Subtraction\n";
cout <<"3 - Division\n";
cout <<"4 - multiplication\n";
cout <<"Option: ";	
cin >>op;
if (op==1)
{
	result=num1+num2;
	cout <<num1 <<" + " <<" = " << result;
}
else if (op==2)
{
	result=num1-num2;
	cout <<num1 <<" - " <<" = " << result;
}
else if (op==3)
{
	result=num1/num2;
	cout <<num1 <<" / " <<" = " << result;
}
else if (op==4)
{
	result=num1*num2;
	cout <<num1 <<" * " <<" = " << result;
}
else
{
	cout <<"Invalid option!!!";
}








	
}
