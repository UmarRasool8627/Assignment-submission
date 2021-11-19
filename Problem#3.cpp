#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int num1[size], a, num2[size];
	cout << " Enter value of number "<<endl;
	for (a = 0; a < size; a++)
	{
		cin >> num1[a];
	}
	int temp = 0, temp1 = 0, ind, value;
	cout << " Enter a position ";
	cin >> ind;
	cout << " Enter the new number  ";
	cin >> value;
	for (a = ind; a < size; a++)
	{
		temp = num1[a];
		temp1 = num1[a+1];
		temp = temp1;
	}
	num1[ind-1] = value;
	cout << " The updation value is ";
	for (a = 0; a < 10; a++)
	{
		cout << num1[a] << " ";
	}
	cout << endl;
	system("pause");
}
