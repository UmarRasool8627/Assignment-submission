#include<iostream>
using namespace std;
int main()
{
	const int arr = 5;
	int num[arr];
	cout<<" Enter a number "<<endl;
	for(int a=0; a<arr; a++)
	{
		cin>>num[a];
	}
	int sum,a,b;
	cout<<" Enter target sum "<<endl;
	cin>>sum;
	bool flag = true;
	for(int a=0; a<arr/2+1; a++)
	{
		for(int b=arr; b>=arr/2+1; b--)
		{
			if(num[a]+num[b]==sum)
			{
				cout<<"\n The numbers are found ";
				cout<<num[a]<<"+"<<num[b]<<"=="<<sum;
				cout<<endl;
			}
		}
	}
	system("pause");
}
