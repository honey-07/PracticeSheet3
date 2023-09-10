/* Write a C++ Program to create a class named 'Student' with a string variable
'name' and an integer variable 'roll_no'. Assign the value of roll_no as '2' and
that of name as "John" by creating an object of the class Student. */

#include <iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll;
};
int main()
{
    student s1;
    s1.name="john";
    s1.roll=2;
    cout << s1.name << endl << s1.roll << endl;
}
