#include<iostream>
using namespace std;
//single inheritance
class Parent {
	public:
		int pincode,phno;
		string city;
		Parent(int pn,int ph,string c)
		{
			pincode=pn;
			phno=ph;
			city=c;
		}
};
class Child:public Parent
{
	public:
		Child(int pn,int ph,string c):Parent(pn,ph,c)
		{
			
		}
		void display()
		{
			cout<<"Pincode"<<" "<<pincode<<endl<<"Phno"<<" "<<phno<<endl<<"city"<<city<<endl;
	}
	};
	main()
	{
		Child c(500038,1234567890,"HYD");
		c.display();
	}

	
