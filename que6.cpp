//  Write a C++ program to calculate the factorial of a given number using recursion

#include<iostream>
using namespace std;

int factorial(int num)
{
	int fact=1;
	for (int i = 1; i <= num; ++i)
	{
		fact=fact*i;
	}
	cout <<"factorial is : " << fact;
	
}

int main()
{
	int n,result;
	cout << "Enter any number";
	cin >> n;
	result=factorial(n);
	return 0;
}
