/* Write a C++ Program to print the average of three numbers entered by the
user by creating a class named 'Average' having a function to calculate and
print the average with object of a class.
*/
#include<iostream>
using namespace std;
class average
{
public:
	int avg;

	void getdata()
	{
		
	}
	void calculation(int n1, int n2, int n3)
	{
		avg=(n1+n2+n3)/3;
	}
	void display()
	{
		cout <<"averahe is : " << avg;
	}
};

int main()
{
	int n1,n2,n3;
	average a;
	cout << "enter 3 numbers ";
		cin >> n1 >> n2 >> n3;

		a.calculation(n1,n2,n3);
		a.display();

return 0;
}
