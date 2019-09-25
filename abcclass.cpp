#include<iostream>
using namespace std;
class A
{
	public:
		virtual void aboutus()
		{
			cout<<"this is A"<<endl;
		}
	};
	class B:public A
	{
		public:
			void aboutus()
			{
				cout<<"this is B"<<endl;
			}
			void welcome()
			{
				cout<<"welcome to B"<<endl;
			}
		};
	class C:public B
	{
		public:
			void aboutus()
			{
				cout<<"this is C"<<endl;
			}
		};
		main()
		{ A *p;
		p=new A();
		p->aboutus();
		p=new B();
		p->aboutus();
		p=new C();
		p->aboutus();
			
		}

