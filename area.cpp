#include<iostream>
using namespace std;
class Maths
{
	public:
 static void area(int side)
 {
 	cout<<"area of square is"<<side*side<<endl;
 }
 static void area(int length,int width)
 {
 	cout<<"area of rectangle is"<<length*width<<endl;
 }
 static void area(double r)
 {
 	cout<<"area of circle is"<<3.14*r*r<<endl;
 }
};
main()
{
	Maths::area(5);
	Maths::area(5.0);
	Maths::area(5,6);
}
