#include<iostream>
using namespace std;
class A
{
	public:
		virtual void show()=0;

};
class B:public A
{
	public:
		void show()
		{
			cout<<"B";
		}
};
main()
{
A *p;
p=new B();
p->show();
}
