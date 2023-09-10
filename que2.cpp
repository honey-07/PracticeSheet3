/* Write a C++ Program to list a prime numbers between given range.
Note: Take the range from user.
*/

#include<iostream>
using namespace std;

int main()
{
	int start,end;
	cout << "Enter the range : ";
	cin >> start >> end;

	

	for (int temp=start; temp<=end; temp++)
		{
			int flag=0;

			if(start>1)
			{
		
				for(int i=2; i<temp; i++)
				{	
					if(temp%i==0)
					{
					flag=1;
				    break;
					}
				}
			if (flag==0)
				cout << temp << " ";
			
			}

		}
	
return 0;
}
