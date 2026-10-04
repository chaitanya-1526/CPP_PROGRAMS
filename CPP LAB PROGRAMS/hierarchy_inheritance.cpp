#include<iostream>
using namespace std;
//Hierarchy inheritance
class Parent
{
	public:
		string Iq,color;
		int height;
		Parent(string iq,string c,int h)
		{
			Iq=iq;
			color=c;
			height=h;
		}
};
class Child_1:public Parent
{
	public:
		Child_1(string iq,string c,int h):Parent (iq,c,h)
		{
			
		}
	};
class Child_2:public Parent
{
		public:
			Child_2(string iq,string c,int h):Parent(iq,c,h)
		{
			
		}
		void display()
		{
			cout<<"IQ Level is:"<<Iq<<endl;
			cout<<"Color is:"<<color<<endl;
			cout<<"Height is:"<<height<<endl;
		}
};
int main()
{
	Child_2 c2("High","White",6);
	c2.display();
}
