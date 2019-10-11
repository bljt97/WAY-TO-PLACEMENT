#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int regno;
	char name[50];
	float cgpa;
	cout<<"Enter reg no : "<<endl;
	cin>>regno;
	cin.ignore();
	cout<<"Enter name : "<<endl;
	cin.getline(name,25);
	cout<<"Enter cgpa : "<<endl;
	cin>>cgpa;
	cout<<"THE DETAILS ARE "<<endl;
	cout<<endl<<regno;
	cout<<endl<<name<<endl<<cgpa;
	return 0;
}
