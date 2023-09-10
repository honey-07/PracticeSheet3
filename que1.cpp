/* Write a C++ Program to create a menu driven program to perform the
following operations :
a) Sum of Digit
b) Multiplication of Digit
c) Armstrong or Not
d) Palindrome or Not
Note: User has a set of choices to perform multiple times until user explicitly
does not exit the program
*/
#include <iostream>
using namespace std;

int main()
{
	int choice;
	char repeat;
	cout << "Enter 1-sum of digits \n 2-Multiplication of Digit \n 3-Armstrong or Not \n 4-Palindrome or Not     ";
	cin >> choice;

	do
	{
		switch(choice)
		{
			case 1:
			{
				int n,sum=0,rem;
				cout << "enter any number";
				cin >> n;
				while(n>0)
				{
					rem=n%10;
					n /= 10;
					sum = sum + rem;
					
				}
				cout << sum;
			}
			break;

			case 2:
			{
				int n,mul=1,rem;
				cout << "enter any number";
				cin >> n;
				while(n>0)
				{
					rem=n%10;
					n /= 10;
					mul *= rem;	
				}
				cout << mul;
			}
			break;

			case 3:
			{
				int n,sum=0,rem,num;
				cout << "enter any number";
				cin >> n;
				num=n;
				while(n!=0)
				{
					rem=n%10;
					sum=sum+(rem*rem*rem);
					n /= 10;	 
				}
					if (sum == num)
					{
					cout << num << " IS AN ARMSTRONG NUMBER";
					}
				else
				{
					cout << num << " IS NOT AN ARMSTRONG NUMBER";
				}
			}
			break;

			case 4:
			{
				int n,rev=0,rem,num;
				cout << "enter any number";
				cin >> n;

				num=n;

				while(n!=0)
				{
					rem=n%10;
					rev=rev * 10 + rem;
					n /= 10;	 
				}
					if (rev == num)
					{
					cout << num << " IS AN PALINDROME NUMBER";
					}
				else
				{
					cout << num << " IS NOT AN PALINDROME NUMBER";
				}

			}
			break;
			default:
				cout << "invalid choice";
				break;
		}
		cout << " \n enter Y/y to repeat the process : ";
		cin >> repeat;

	}while (repeat == 'Y' || repeat == 'y');

return 0;
}
