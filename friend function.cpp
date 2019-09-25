#include<iostream>
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
			int square()
			{
				return num*num;
			}
			friend class Math;
	};
class Math
{
	public:
		static void cube(General g)
		{
			cout<<"cube of"<<g.num<<"is"<<g.num*g.num*g.num<<endl;
		}
	};
	main()
	{
		General g(6);
		Math::cube(g);
	}
