#include<iostream>
#include<string.h>
using namespace std;
class General
{
	private:
	int num;
	public:
	General(int num)
	{
		this->num=num;
	}
	void setNum(int num)
	{
		this->num=num;
	}
	int getNum()
	{
		return num;
	}
	int square()
	{
		int s=num*num;
		return s;
	}
	int cube()
	{
		int c=num*num*num;
		return c;
	}
};
main()
{ int n;
  cout<<"enter a number:";
  cin>>n;
  General g(n);
  cout<<g.square()<<","<<g.cube();
}
