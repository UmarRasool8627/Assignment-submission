#include<iostream>
using namespace std;
int main()
{
	int num1[10], numsquare[10];
	int a;
	cout << "Enter number " << endl;
	for (a = 0; a < 10; a++)
	{

		cin >> num1[a];
	}
	for (a = 0; a < 10; a++)
	{
		numsquare[a] = num1[a] * num1[a];
		cout << numsquare[a] << endl;
	}
	system("pause");






	return 0;
}
