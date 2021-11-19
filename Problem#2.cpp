#include<iostream>
using namespace std;
int main()
{
	const int arr = 10;
	int num[arr], a;
	cout<<" Enter a number "<<endl;
	for(a=0; a<arr; a++)
	{
		cin>>num[a];
	}
	cout<<" Enter a number for check "<<endl;
	int check = 0 , num1;
	cin>>num1;
	for(a=0; a<arr; a++)
	{
		if(num[a]==num1)
		{
			check++;
		}
	}
	if(check>0)
	{
		cout<<" The number is found "<<endl;
	}
	else
	{
		cout<<" The number is not found "<<endl;
	}
}
