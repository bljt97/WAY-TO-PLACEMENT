#include<iostream>
using namespace std;
int main()
{
	int num1,num2,sum,sub,mul;
	float devide;
	cout<<"Enter num1 : ";
	cin>>num1;
	cout<<"Enter num2 : ";
	cin>>num2;
	sum =num1 + num2;
	sub=num1-num2;
	mul=num1*num2;
	devide= (float)num1/num2;
	cout<<"The sum of two no is  "<<sum;
	cout<<"\nThe sub of two no is  "<<sub;
	cout<<"\nThe mul of two no is  "<<mul;
	cout<<"\nThe dev of two no is  "<<devide;
	return 0; 
}
