#include<iostream.h>
#include<conio.h>
class student
{
	private:
	int a;

	void setData()
	{
		a=50;
		cout<<a;


	}
	friend myfriend;

};
class myfriend
{
	public:
	void display(student&s)
	{
	     s.setData();
	}


};
void main()
{
	clrscr();
	student s;
	myfriend m;
	m.display(s);
	getch();


}