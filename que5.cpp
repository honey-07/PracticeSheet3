// Write a C++ program to find Square of a Number using inline function.

#include<iostream>
using namespace std;

inline int square(int n)
{
	cout << "Square of " << n << " is " << n*n << endl;
}
int main()
{
	int n;
	cout << "enter any number";
	cin >> n;
	square(n);
return 0;
}
