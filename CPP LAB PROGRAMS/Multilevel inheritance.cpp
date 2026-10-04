#include<iostream>
using namespace std;
//Multi-Level inheritance
class A
{
public:
void showA(int a)	
{
	cout<<"Class A value is:"<<a<<endl;
}
};
class B:public A
{
	public:
		void showB()
		{
			cout<<"Class B extends class A"<<endl;
		}
};
class C:public B
{
public:
void showC()
{
	cout<<"Class C extends Class B "<<endl;
	}	
};
class D:public C
{
public:
void showD()
{
	cout<<"Class D extends class C"<<endl;
	}	
};
int main()
{
	D d;
	d.showA(10);
	d.showB();
	d.showC();
	d.showD();
	
}
