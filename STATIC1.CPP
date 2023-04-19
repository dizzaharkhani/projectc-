#include<iostream.h>
#include<conio.h>
class student
{
	public:
	static int a;
	void display()
	{
		cout<<a;

	}
	static void test()
	{
		cout<<"enter the value of a";


	}

};
int student::a=20;
void main()
{
	clrscr();
	student s;
	cout<<student::a;
	student::test();

	getch();



}