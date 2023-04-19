#include<iostream.h>
#include<conio.h>
class Zoo
{
	public:
	char n[20];
	char a[100];
	char b[100];
	int r;
	int p;

	void setData()
	{
		cout<<"Enter Zoo name:";
		cin>>n;


	}
	void omAnimals()
	{
		cout<<"Enter omnivores animals and birds in zoo:";
		cout<<"dog,cat,bear,crow,pig,peacock,swan,hen,monkey,ostrich\n";

	}
	void carAnimals()
	{
		cout<<"Enter carnivores animals and birds in zoo:";
		cout<<"lion,tiger,leopard,eagle,polar bear,wolf,crocodile,kite\n";

	}
	void room()
	{
		cout<<"Enter number of rooms available in zoo";
		cin>>r;
		cout<<"Price of rooms:";
		cin>>p;

	}



	void display()
	{
		cout<<"Number of rooms available:"<<r<<endl;
		cout<<"Price per room is:"<<p<<" ruppes";


	}






};
void main()
{
	clrscr();
	Zoo z;
	z.setData();
	z.omAnimals();
	z.carAnimals();
	z.room();
	z.display();
	getch();



}