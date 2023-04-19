#include<iostream.h>
#include<conio.h>
class Bank
{
	public:
	float p;
	float r;
	float y;
	float si;
	float a;

	void setData()
	{
		cout<<"Enter principal amount=";
		cin>>p;
		cout<<"Enter rate of interest=";
		cin>>r;
		cout<<"Enter number of years=";
		cin>>y;
		si=(p*r*y)/100;
		a=si+p;





	}


	 void display()
	 {
		cout<<"\n Principal amount="<<p;
		cout<<"\n Rate of interest="<<r;
		cout<<"\n Number of years="<<y;
		cout<<"\n Interset="<<si;
		cout<<"\n Amount="<<a;


	 }

};
void main()
{
	clrscr();
	Bank b;
	b.setData();
	b.display();
	getch();


}